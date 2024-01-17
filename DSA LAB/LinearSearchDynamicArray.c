#include<stdio.h>
#include<stdlib.h>
void linear_search(int array[],int num,int size){
    int pos=-1;
    for(int i=0;i<size;i++){
            if(array[i]==num){
               pos=i;
               break;} 
    }
    if(pos==-1)
        printf("\n%d does not exist in the array.",num);
    else
        printf("\n%d is found in the array at position: %d",num,pos+1);
}
int main(){
    int size,num;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&size);
    int* array;
    array=(int*) malloc(size * sizeof(int));

    if(array==NULL)
        printf("\nMemory allocation is failed.");
    else{
    for(int i=0;i<size;i++)
        scanf("%d",&array[i]);
    }
    printf("\nEnter the element to be searched: ");
    scanf("%d",&num);
    linear_search(array,num,size);
    free(array);
    return 0;
    
}