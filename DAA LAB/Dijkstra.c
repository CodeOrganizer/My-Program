#include<stdio.h>
#include<stdbool.h>
#define V 9
#define inf 99999

int minDistance(int dist[],bool sptSet[])
{
    int min=inf,min_index;
    for(int i=0;i<V;i++)
    {
        if(sptSet[i]==false && dist[i]<=min)
        {
            min=dist[i];
            min_index=i;
        }
    }
    return min_index;
}
void printSolution(int dist[],int src)
{
    printf("Vertex \t\t Shortest path from vertex '%d'\n",src);
    for(int i=0;i<V;i++)
    {
        if(dist[i]==inf)
            printf("%d\t\t\t%s\n",i,"INF");
        else
            printf("%d\t\t\t%d\n",i,dist[i]);
    }
        
}
void dijkstra(int graph[][V],int src)
{
    int dist[V];        //array to store the shortest distance
    bool sptSet[V];     //array to store the boolean value to know the vertiex is selected or not
    for(int i=0;i<V;i++)    //initialize all the distance from source to infinity & boolean value false
    {
        dist[i]=inf;
        sptSet[i]=false;
    }
    dist[src]=0;    //set sorurce vertex distance 0
    for(int count=0;count<V-1;count++)      //to exclude source it's v-1
    {
        int u=minDistance(dist,sptSet);     //to find the vertex with minimum distance but false in sptSet i.e., minimum distance among the unselected vertices
        sptSet[u]=true;     //After getting min_index we should mark the selected vertex
        for(int n=0;n<V;n++)
        {
            if(sptSet[n]==false && graph[u][n]!=inf && dist[u]+graph[u][n]<dist[n])
                dist[n]=dist[u]+graph[u][n];
        }
    }
    printSolution(dist,src);
}

int main()
{
     int graph[V][V]={{0,4,inf,inf,8,inf,inf,inf,inf},
                     {4,0,8,inf,11,inf,inf,inf,inf},
                     {inf,8,0,7,inf,inf,4,inf,2},
                     {inf,inf,7,0,inf,inf,14,9,inf},
                     {8,11,inf,inf,0,1,inf,inf,7},
                     {inf,inf,inf,inf,1,0,2,inf,6},
                     {inf,inf,4,14,inf,2,0,10,inf},
                     {inf,inf,inf,9,inf,inf,10,0,inf},
                     {inf,inf,2,inf,7,6,inf,inf,0}};

    /* int graph[V][V]={{0,10,5,0},
                     {0,0,0,0},
                     {0,0,0,0},
                     {0,1,3,0}}; */
    
    dijkstra(graph,0);
}