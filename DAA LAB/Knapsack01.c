#include<stdio.h>
#include<stdlib.h>
int max(int a,int b)
{
    return (a>b)?a:b;
}
void printList(int capacity,int V[][capacity+1],int wt[],int n)
{
    int i=n,w=capacity;
    int x[n];
    printf("Selected Item(x1,x2,x3,x4): ");
    while(i>0&&w>=0)
    {
        if(V[i][w]!=V[i-1][w])
        {    
            x[i-1]=1;
            w=w-wt[i-1];
            i--;
        }
        else
        {    
            x[i-1]=0;
            i--;
        }    
    }
    for(int i=0;i<n;i++)
        printf("%d ",x[i]);
    printf("\n");
    
}
void knapsack(int profit[],int wt[],int n,int capacity)
{
    int V[n+1][capacity+1];
    for(int w=0;w<=capacity;w++)
        V[0][w]=0;
    for(int i=0;i<=n;i++)
        V[i][0]=0;
    for(int i=1;i<=n;i++)
    {
        for(int w=1;w<=capacity;w++)
        {
            if(w>=wt[i-1])
                V[i][w]=max(V[i-1][w],(V[i-1][w-wt[i-1]]+profit[i-1]));
            else
                V[i][w]=V[i-1][w];
        }
    }

    printf("Knapsack Table:\n");
    for(int i=0;i<=n;i++)
    {
        for(int w=0;w<=capacity;w++)
            printf("%d\t",V[i][w]);
        printf("\n");
    }
    printList(capacity,V,wt,n);
    printf("Maximum profit: %d\n",V[n][capacity]);
    
}

int main()
{
    int n,capacity;
    printf("Enter the no. of item: ");
    scanf("%d",&n);
    printf("Enter capacity of knapsack: ");
    scanf("%d",&capacity);
    int *profit=(int*)malloc(n*sizeof(int));
    int *wt=(int*)malloc(n*sizeof(int));
    printf("Enter the profit of objects: ");
    for(int i=0;i<n;i++)
        scanf("%d",&profit[i]);
    printf("Enter the weight of objects: ");
    for(int i=0;i<n;i++)
        scanf("%d",&wt[i]);

    knapsack(profit,wt,n,capacity);
    return 0;
}