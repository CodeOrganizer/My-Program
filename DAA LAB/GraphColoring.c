#include<stdio.h>
#include<stdbool.h>
#define m 3
#define V 4

bool isSafe(int graph[][V],int v,int c,int color[])
{
    for(int col=0;col<V;col++)
    {
        if(graph[v][col]&&color[col]==c)
            return false;
    }
    return true;
}

void printSolution(int color[])
{
    printf("Following are the assigned colors: ");
    for(int i=0;i<V;i++)
        printf("%d ",color[i]);
    printf("\n");
}

bool graphColoring(int graph[][V],int color[],int v)
{
    if(v==V)
    {   
        printSolution(color);
        return true;
    }
    //bool res=false;
    for(int c=1;c<=m;c++)
    {
        color[v]=c;
        if(isSafe(graph,v,c,color))
        {    
            if(graphColoring(graph,color,v+1))
                return true;
                /* res=graphColoring(graph,color,v+1)||res;
                color[v]=0; */
        }
        color[v]=0;
    }
    //return res;
    return false;
}
int main()
{
    int graph[V][V]={{0,1,0,1},
                     {1,0,1,0},
                     {0,1,0,1},
                     {1,0,1,0}};
    int color[V];
    for(int i=0;i<V;i++)
        color[i]=0;
    if(!graphColoring(graph,color,0))
        printf("No solution found.");
    return 0;
}