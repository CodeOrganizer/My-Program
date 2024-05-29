#include<stdio.h>
#define inf 9999       //Defining infinty distance as inf
#define n 4            //Defining no of vertices as n

int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}

void printDistanceMatrix(int A[][n])
{   
    printf("The following matrix shows the shortest distance between all pair of vertices:\n");
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(A[i][j]==inf)
                    printf("%7s","INF");
                else
                    printf("%7d",A[i][j]);
            }
            printf("\n");
        }
}

void floydWarshall(int A[][n])
{
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                A[i][j]=min(A[i][j],(A[i][k]+A[k][j]));
            }
        }
    }
    printDistanceMatrix(A);
}

int main()
{
    int graph[n][n]={{0,inf,3,inf},
                     {2,0,inf,inf},
                     {inf,7,0,1},
                     {6,inf,inf,0}};
    floydWarshall(graph);
}