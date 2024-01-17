//Question: Write a C program to apply binary search on an array.
//Code:
#include<stdio.h>

int binary_search(int arr[],int key,int size){
    int l=0,h=size-1,mid;
    while(l<=h){
        mid=(l+h)/2;
        if(key==arr[mid])
            return mid;
        else if(key<arr[mid])
            h=mid-1;
        else
            l=mid+1;
    }
    return -1;
}

int main(){
    int size,key;

    int arr[]={5,9,10,12,13,17,23,29};
    size=(sizeof(arr)/sizeof(arr[0]));
    
    printf("\nThe sorted array is: ");
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);

    printf("\nEnter the element to be searched: ");
    scanf("%d",&key);

    int pos=binary_search(arr,key,size);
    if(pos==-1)
        printf("\n%d does not exist in the array.",key);
    else
        printf("\n%d is found in the array at position: %d",key,pos+1);

    return 0;
}

//Output:
/*
Output 1:
The sorted array is: 5 9 10 12 13 17 23 29 
Enter the element to be searched: 13

13 is found in the array at position: 5
PS C:\Users\iraki\Desktop\My Program\DSA LAB>

Output 2:
The sorted array is: 5 9 10 12 13 17 23 29 
Enter the element to be searched: 33

33 does not exist in the array.
PS C:\Users\iraki\Desktop\My Program\DSA LAB>
*/