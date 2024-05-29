#include <stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool isSafe(int **arr,int x,int y,int n)
{
    for(int row=0;row<x;row++)
    {
        if(arr[row][y]=='Q')
            return false;
    }
    int row=x;
    int col=y;
    while(row>=0&&col>=0)
    {
        if(arr[row][col]=='Q')
            return false;
        row--;
        col--;
    }
    row=x;
    col=y;
    while(row>=0&&col<n)
    {
        if(arr[row][col]=='Q')
            return false;
        row--;
        col++;
    }
    return true;
}

void printSolution(int **arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


bool nQueen(int **arr,int x,int n)
{
    if(x==n)
    {    
        printSolution(arr,n);
        return true;
    }
    //bool res=false;
    for(int col=0;col<n;col++)
    {
        if(isSafe(arr,x,col,n))
        {
            arr[x][col]='Q';
            if(nQueen(arr,x+1,n))
                return true;
            /* res=nQueen(arr,x+1,n)||res;
            arr[x][col]='_'; */
            arr[x][col]='_';
        }
    }
   // return res;
   return false;
}


int main()
{
    printf("Enter no of queen: ");
    int n;
    scanf("%d",&n);
    int **arr=(int**)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        arr[i]=(int*)malloc(n*sizeof(int));
        for(int j=0;j<n;j++)
            arr[i][j]='_';
    }
    if(!nQueen(arr,0,n))
        printf("No sollution found");
    for(int i=0;i<n;i++)
    {
        free(arr[i]);
    }
    free(arr);
    return 0;
}