#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int *p;
     printf("Enter the size of inputs:");
     scanf("%d",&n);
     p=(int*) malloc(5*sizeof (int));
     printf("Enter the values:\n");
     for(int i=0;i<n;i++)
     scanf("%d",&p[i]);
     printf("The values are:");
     for(int i=0;i<n;i++)
     printf("%d\n",p[i]);

     printf("Enter the new size of inputs:\n");
     scanf("%d",&n);

     p=(int*) realloc(p,n*sizeof(int));
     printf("Enter the values:\n");
     for(int i=0;i<n;i++)
     scanf("%d",&p[i]);

     printf("Enter the new values of inputs:\n");
     for(int i=0;i<n;i++)
     printf("%d\n",p[i]);

    return 0;
}