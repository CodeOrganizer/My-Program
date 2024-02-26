//Question 1: Write a C program for sorting an array using merge sort.
//Code:
#include<stdio.h>
#define SIZE 10
void merge(int array[],int l,int mid,int h){
int i=l,j=mid+1,k=l,temp[SIZE];
    while(i<=mid && j<=h){
        if(array[i]<array[j])
            temp[k++]=array[i++];
        else
            temp[k++]=array[j++];
    }   
    for(;i<mid;i++)
            temp[k++]=array[i++];
    for(;j<h;j++)
    for(;i<=mid;i++)
            temp[k++]=array[i++];
    for(;j<=h;j++)
            temp[k++]=array[j++];
    for(int i=l;i<k;i++)
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
    int array[SIZE];
    int n;
    do{printf("Enter the number of elements in the array [Maximum 10]: ");
    scanf("%d",&n);
    if(n>SIZE)
        printf("Size limit exceeded.\n");
    }while(n>SIZE);
        printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&array[i]);
    
    printf("\nUnsorted array: { ");
    for(int i=0;i<n;i++)
        printf("%d ",array[i]);
    printf("}");

    merge_sort(array,0,SIZE-1);

    printf("\nSorted array: { ");
    for(int i=0;i<n;i++)
        printf("%d ",array[i]);
    printf("}");
    
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