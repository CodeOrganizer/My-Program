#include<stdio.h>
int main(){
    //array uses contigious memory allocation.But may be memory doesn't have contigious location of array size.
    //8gb=8*1024*1024*1024 byte
    //1 int=4 byte
    //total int=8*1024*1024*1024/4 = 2147483648

    int array[214785];
    for(int i=0;i<214785;i++)
    array[i]=i;
    for(int i=0;i<214785 ;i++)
    printf("%d\n",array[i]);
}