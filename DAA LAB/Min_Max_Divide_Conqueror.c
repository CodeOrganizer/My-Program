#include <stdio.h>

typedef struct maxmin{
    int max;
    int min;
}pair;
pair findMaxMin(int arr[],int l,int h){
pair MaxMin,leftMaxMin,rightMaxMin;
if(l==h){
    MaxMin.max=arr[l];
    MaxMin.min=arr[l];
    return MaxMin;
}
else if(h==l+1){
    if(arr[l]>arr[h]){
    MaxMin.max=arr[l];
    MaxMin.min=arr[h];
    }
    else{
    MaxMin.max=arr[h];
    MaxMin.min=arr[l];
    }
    return MaxMin;
}

    int mid=(l+h)/2;
    leftMaxMin=findMaxMin(arr,l,mid);
    rightMaxMin=findMaxMin(arr,mid+1,h);
    if(leftMaxMin.max>rightMaxMin.max)
        MaxMin.max=leftMaxMin.max;
    else
        MaxMin.max=rightMaxMin.max;
    if(leftMaxMin.min<rightMaxMin.min)
        MaxMin.min=leftMaxMin.min;
    else
        MaxMin.min=rightMaxMin.min;
return MaxMin;
}

int main(){
    int arr[] = { 10,123,7,-3, 2, 51 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    pair MaxMin = findMaxMin(arr, 0, arr_size - 1);
    printf("Minimum element is %d\n", MaxMin.min);
    printf("Maximum element is %d\n", MaxMin.max);

    return 0;
}