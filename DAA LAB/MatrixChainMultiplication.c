#include<stdio.h>

void print_solution(int n,int m[][n],int i,int j)
{
    if(i==j)
        printf("A");
    else
    {
        printf("(");
        print_solution(n,m,i,m[i][j]);
        print_solution(n,m,m[i][j]+1,j);
        printf(")");
    }
}
int matrixChainMultiplication(int arr[],int n)
{
    int c[n][n];
    int m[n][n];

    int j,min,q;
    for(int i=1;i<n;i++)
    {
        c[i][i]=0;
        m[i][i]=0;
    }
    for(int d=1;d<n-1;d++)
    {
        for(int i=1;i<n-d;i++)
        {
            j=i+d;
            min=99999;
            for(int k=i;k<j;k++)
            {
                q=c[i][k]+c[k+1][j]+arr[i-1]*arr[k]*arr[j];
                if(q<min)
                {
                    min=q;
                    m[i][j]=k;
                }
            }
            c[i][j]=min;
        }
    }
    print_solution(n,m,1,n-1);
    return c[1][n-1];
}


int main()
{
    int arr[]={3,2,4,2,5};              //Dimension Array
    int size=sizeof(arr)/sizeof(arr[0]);

    printf("\nMinimum cost of matrix multiplication: %d",matrixChainMultiplication(arr,5));

    return 0;

}
