#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void maxheapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=i){
        swap(&arr[i],&arr[largest]);
        maxheapify(arr,n,largest);
    }
}
void heap_sort(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        maxheapify(arr,n,i);    //Build MaxHeap
    }
    for(int i=n-1;i>=0;i--){
        swap(&arr[0],&arr[i]);  //delete one element and apply maxhepify on the rest elements
        maxheapify(arr,i,0);
    }
}
int main(){
    int arr[]={25,5,12,89,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("\nUnsorted Array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    heap_sort(arr,n);

    printf("\nSorted Array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}