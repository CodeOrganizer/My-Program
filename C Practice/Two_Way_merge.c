#include<stdio.h>
void merge(int A[],int B[],int C[],int m,int n)
{
    int i=0,j=0,k=0;
    while(i<m && i<n)
    {
        if(A[i]<B[j])
            C[k++]=A[i++];
        else
            C[k++]=B[j++];
    }
    while(i<m)
        C[k++]=A[i++];
    while(j<n)
        C[k++]=B[j++];

    for(int p=0;p<k;p++)
        printf("%d ",C[p]); 
}
int main()
{
    int A[4]={2,8,15,18};
    int B[7]={5,9,12,17,19,25,30};
    int C[100];
    merge(A,B,C,4,7);
    return 0;
}