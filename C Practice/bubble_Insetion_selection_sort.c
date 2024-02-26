//Question 1: Write a C program for sorting an array using bubble sort.
//Code:
#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bubble_sort(int array[],int size){
    for(int i=0;i<size-1;i++)
        for(int j=0;j<size-i-1;j++){
            if(array[j]>array[j+1])
            swap(&array[j],&array[j+1]);
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

    bubble_sort(array,size);

    printf("\nSorted array: { ");
    for(int i=0;i<size;i++)
        printf("%d ",array[i]);
    printf("}");
    
    return 0;
}

//Output:
/*
Enter the number of elements in the array: 6
12
74
26
19
2
45

Unsorted array: { 12 74 26 19 2 45 }
Sorted array: { 2 12 19 26 45 74 }
PS C:\Users\iraki\Desktop\My Program>
*/





//Question 2: Write a C program for sorting an array using insertion sort.
//Code:
#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void insertion_sort(int array[],int size){
    int key;
    for(int i=1;i<size;i++){
        key=array[i];
        int j=i-1;
                while(j>=0 && array[j]>key){
                    swap(&array[j],&array[j+1]);
                    j--;
                }
        
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



//Question 3: Write a C program for sorting an array using selection sort.
//Code:
#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int smallest(int array[],int i,int size){
    int pos=i,small=array[i];
        for(int j=i+1;j<size;j++){
            if(array[j]<small){
                small=array[j];
                pos=j;
            }
        }
    return pos;
}
void selection_sort(int array[],int size){
    int pos;
    for(int i=0;i<size;i++){
            pos=smallest(array,i,size);
            swap(&array[i],&array[pos]);
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
    selection_sort(array,size);
    
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
4
8
26
7
29

Unsorted array: { 9 4 8 26 7 29 }
Sorted array: { 4 7 8 9 26 29 }
PS C:\Users\iraki\Desktop\My Program\DSA LAB> 
*/