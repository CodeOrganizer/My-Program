#include<stdio.h>
#define capacity 15
#define n 7       //object number

void swap(float *a,float *b)
{
    float temp=*a;
    *a=*b;
    *b=temp;
}
void sort(float *ratio,float *profit,float *weight,float *object)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(ratio[j]<ratio[j+1])
            {
                swap(&ratio[j],&ratio[j+1]);
                swap(&profit[j],&profit[j+1]);
                swap(&weight[j],&weight[j+1]);
                swap(&object[j],&object[j+1]);
            }
        }
    }
}

void fractionalKnapsack(float weight[],float profit[],float object[])
{
    float x[n];
    int u=capacity,i;
    float tp;
    for( i=0;i<n;i++)
    {
        x[i]=0.0;
    }
    printf("\nThe selected object no. is: ");
    for( i=0;i<n;i++)
    {
        if(weight[i]<u)
        {
            x[i]=1.0;
            tp=tp+profit[i];
            u=u-weight[i];
            printf("\t%d\t",(int)object[i]);
        }
        else
            break;
    }
    if(i<n)
    {
        x[i]=u/weight[i];
        tp=tp+profit[i]*x[i];
    }
   
   printf("\t%d\t",(int)object[i]);
   printf("\n\nWeight of the object is: ");
   for(int j=0;j<=i;j++)
    printf("\t%.2f\t",x[j]*weight[j]);
    printf("\n\nPortion of the object is: ");
   for(int j=0;j<=i;j++)
    printf("\t%.2f\t",x[j]); 
   printf("\n\nMaximum profit is: %.2f", tp);

}

int main()
{
    
    float weight[]={2,3,5,7,1,4,1};
    float profit[]={10,5,15,7,6,18,3};
    float object[]={1,2,3,4,5,6,7};
    float ratio[n];

    for(int i=0;i<n;i++)
    {
        ratio[i]=profit[i]/weight[i];
    }
    sort(ratio,profit,weight,object);
    fractionalKnapsack(weight,profit,object);
    

    
    return 0;
}