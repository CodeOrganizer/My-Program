#include<stdio.h>
#define V 4
#define inf 99999

void printSolution(int dist[],int prev[],int src)
{
    printf("Vertex \t\t Shortest path from vertex '%d'\t\tPath\n",src);
    for(int i=0;i<V;i++)
    {
        if(dist[i]==inf)
            printf("%d\t\t\t%s\n",i,"INF");
        else
        {    
            printf("%d\t\t\t%d\t\t\t\t",i,dist[i]);
            printf("%d",i);
            int j=prev[i];
            while(j!=-1)
            {
                printf("<-%d",j);
                j=prev[j];
            }
            printf("\n");
        }
    }
}
void bellmanFord(int graph[][V],int src)
{   
    int dist[V];
    int prev[V];
    for(int i=0;i<V;i++)
    {
        dist[i]=inf;
        prev[i]=-1;     //initialized NULL
    }
    dist[src]=0;

    for(int count=0;count<V;count++)
    {
        for(int u=0;u<V;u++)
        {
            for(int v=0;v<V;v++)
            {
                if((graph[u][v]!=inf || graph[u][v]!=0)&& dist[u]+graph[u][v]<dist[v])
                {
                     dist[v]=dist[u]+graph[u][v];
                     prev[v]=u;
                }   
                
            }
        }
    }

    for(int u=0;u<V;u++)
    {
        for(int v=0;v<V;v++)
        {
            if((graph[u][v]!=inf || graph[u][v]!=0) && dist[u]+graph[u][v]<dist[v])
            {
                printf("Graph contains negative weight cycle.");
                return;
            }        
        }
    }
    printSolution(dist,prev,src);
}

int main()
{
    int graph[V][V]={{0,4,inf,5},
                     {inf,0,inf,inf},
                     {inf,-10,0,inf},
                     {inf,inf,3,0}};
    
    bellmanFord(graph,0);
    return 0;
}