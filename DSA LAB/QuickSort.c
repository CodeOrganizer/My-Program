//Question 1: Write a C program for sorting an array using quick sort.
//Code:
#include<stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int array[], int low, int high) {
    int pivot = array[low]; // Select the first element as the pivot
    int i = high + 1; // Index of the smaller element

    for (int j = high; j > low; j--) {
        // If the current element is greater than the pivot
        if (array[j] > pivot) {
            i--; // Decrement index of the smaller element
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i - 1], &array[low]);
    return (i - 1);
}

void quick_sort(int array[],int l,int h){
    int j;
    if(l<h){
            j=partition(array,l,h);
            quick_sort(array,l,j-1);
            quick_sort(array,j+1,h);
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

    quick_sort(array,0,size-1);

    printf("\nSorted array: { ");
    for(int i=0;i<size;i++)
        printf("%d ",array[i]);
    printf("}");
    
    return 0;
}

//Output:
/*
Enter the number of elements in the array: 8
12
17
52
29
54
72
33
29

Unsorted array: { 12 17 52 29 54 72 33 29 }
Sorted array: { 12 17 29 29 33 52 54 72 }
PS C:\Users\iraki\Desktop\My Program\DSA LAB>
*/