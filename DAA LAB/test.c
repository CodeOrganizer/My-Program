#include<stdio.h>
#include<stdbool.h>
#define V 4

int main()
{
    int color[V];
    for(int i=0;i<V;i++)
        color[i]=0;
    for(int i=0;i<V;i++)
    printf("%d ",color[i]);
}