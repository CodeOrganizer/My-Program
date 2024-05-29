//Question 1: Write a C program for sorting an array using merge sort.
//Code:
#include<stdio.h>
#include<stdlib.h>
void merge(int array[],int l,int mid,int h){
int i=l,j=mid+1,k=l,temp[h+1];
    while(i<=mid && j<=h){
        if(array[i]<array[j])
            temp[k++]=array[i++];
        else
            temp[k++]=array[j++];
    }   
    while(i<=mid)
        temp[k++]=array[i++];
    while(j<=h)
        temp[k++]=array[j++];
    for(int i=l;i<=h;i++)
            array[i]=temp[i];
}
void merge_sort(int array[],int l,int h){
    int mid;
    if(l<h){
        mid=(l+h)/2;
        merge_sort(array,l,mid);
        merge_sort(array,mid+1,h);
        merge(array,l,mid,h);
    }
}
int main(){
    int *array;
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    array=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        scanf("%d",&array[i]);
    
    printf("\nUnsorted array: { ");
    for(int i=0;i<n;i++)
        printf("%d ",array[i]);
    printf("}");

    merge_sort(array,0,n-1);

    printf("\nSorted array: { ");
    for(int i=0;i<n;i++)
        printf("%d ",array[i]);
    printf("}");

    free(array);
    return 0;
}



//Output:
/*
Enter the number of elements in the array [Maximum 10]: 8 
Enter the elements:
125
41
96
58
103
75
121
94

Unsorted array: { 125 41 96 58 103 75 121 94 }
Sorted array: { 41 58 75 94 96 103 121 125 }
PS C:\Users\iraki\Desktop\My Program\DSA LAB> 
*/