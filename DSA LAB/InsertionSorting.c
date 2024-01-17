//Question 2: Write a C program for sorting an array using insertion sort.
//Code:
#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void insertion_sort(int array[],int size){
    int x;
    for(int i=1;i<size;i++){
        x=array[i];
        int j=i-1;
                while(j>-1 && array[j]>x){
                    array[j+1]=array[j];
                    j--;
                }
        array[j+1]=x;
        }
}

int main(){
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&size);
    int array[size];
    for(int i=0;i<size;i++)
        scanf("%d",&array[i]);
    
    printf("\nUnsorted array: { ");
    for(int i=0;i<size;i++)
        printf("%d ",array[i]);
    printf("}");

    insertion_sort(array,size);

    printf("\nSorted array: { ");
    for(int i=0;i<size;i++)
        printf("%d ",array[i]);
    printf("}");
    
    return 0;
}
//Output:
/*
Enter the number of elements in the array: 6
9
5
10
29
4
17

Unsorted array: { 9 5 10 29 4 17 }
Sorted array: { 4 5 9 10 17 29 }
PS C:\Users\iraki\Desktop\My Program\DSA LAB>
*/