#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int *p;

    //Use of malloc********************************************
     printf("Enter the size of inputs:");
     scanf("%d",&n);
     p=(int*) malloc(5*sizeof (int)); //same for calloc but it initilaze all block to 0
     //Taking input
     printf("Enter the values:\n");
     for(int i=0;i<n;i++)
     scanf("%d",&p[i]);
     //Showing input
     printf("The values are:\n");
     for(int i=0;i<n;i++)
     printf("%d\n",p[i]);
     //making the memory free
     free(p);

     /*Use of realloc******************************************
     printf("Enter the new size of inputs:\n");
     scanf("%d",&n);
     p=(int*) realloc(p,n*sizeof(int));
     //Taking input
     printf("Enter the new values:\n");
     for(int i=0;i<n;i++)
     scanf("%d",&p[i]);
     //Showing input
     printf("The new values are:\n");
     for(int i=0;i<n;i++)
     printf("%d\n",p[i]);*/

     //Use of calloc******************************************
     printf("Enter the new size of inputs:\n");
     scanf("%d",&n);
     p=(int*) calloc(n,sizeof(int));
     /*/Taking input
     printf("Enter the new values:\n"); 
     for(int i=0;i<n;i++)
     scanf("%d",&p[i]);
     */
     //Showing input
     printf("The new values are:\n");
     for(int i=0;i<n;i++)
     printf("%d\n",p[i]); //it will show 0 for each element as inputs are not taken & contigious allocation is done

    return 0;
}