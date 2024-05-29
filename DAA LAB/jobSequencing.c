#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// A structure to represent a Jobs
typedef struct Jobs {
   char id; // Jobs Id
   int dead; // Deadline of Jobs
   int profit; // Profit if Jobs is over before or on deadline
} Jobs;

void sort(Jobs arr[],int n)
{
    Jobs temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i].profit<arr[j].profit)
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void jobSequencing(Jobs arr[],int n)
{
    int max_dead=arr[0].dead;
    for(int i=0;i<n;i++)
    {
        if(arr[i].dead>max_dead)
            max_dead=arr[i].dead;
    }
    char result[max_dead];
    bool slot[max_dead];
    for(int i=0;i<max_dead;i++)
        slot[i]=false;
    sort(arr,n);
    for(int i=0;i<n;i++)
    {
        for(int j=(arr[i].dead-1);j>=0;j--)
        {
            if(slot[j]==false)
            {
                result[j]=arr[i].id;
                slot[j]=true;
                break;      //iterate for next job
            }
        }
    }
    for(int i=0;i<max_dead;i++)
        printf("%c ",result[i]);
    printf("\nMaximum profit: ");
    int tp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<max_dead;j++)
        {
            if(arr[i].id==result[j])
            tp=tp+arr[i].profit;
        }
    }
    printf("%d",tp);
}

int main(){
   Jobs arr[] = { 
      { 'a', 2, 100 },
      { 'b', 1, 19 },
      { 'c', 1, 27 },
      { 'd', 1, 25 },
      { 'e', 3, 15 }
   };
   int n = sizeof(arr) / sizeof(arr[0]);
   printf("Following is maximum profit sequence of Jobs: ");
   jobSequencing(arr,n);

   return 0;
}