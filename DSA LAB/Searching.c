//Question: Write a C program to apply linear search on an array.
//Code:
#include<stdio.h>
#include<stdlib.h>
void linear_search(int arr[],int key,int size){
    int pos=-1;
    for(int i=0;i<size;i++){
            if(arr[i]==key){
               pos=i;
               break;} 
    }
    if(pos==-1)
        printf("\n%d does not exist in the array.",key);
    else
        printf("\n%d is found in the array at position: %d",key,pos+1);
}
int main(){
    int size,key;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    
    printf("\nEnter the element to be searched: ");
    scanf("%d",&key);
    linear_search(arr,key,size);
    return 0;
}

//Output:
/*
Output 1:
Enter the number of elements in the array: 5
12
14
19
47
26

Enter the element to be searched: 22

22 does not exist in the array.
PS C:\Users\iraki\Desktop\My Program\DSA LAB>
Output 2:
Enter the number of elements in the array: 5
12
14
19
47
26

Enter the element to be searched: 19

19 is found in the array at position: 3
PS C:\Users\iraki\Desktop\My Program\DSA LAB>
*/