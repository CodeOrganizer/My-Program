#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main(){
    /* int a=10;
    int *p=&a;
    //*p=&a;    //It will give error. should: p=&a;
    cout<<(int)p<<" "<<*p<<" "<<a<<" "<<(int)&a;
    return 0; */
    
    /* int a[5]={2,3,4,5,6};
    int *p;
    p=a;   //&a: wrong, For array it'll be only a.
    for(int i=0;i<5;i++)
        cout<<p[i]<<endl; //it should only p not *p for array.
    delete []p; */

    /* int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout<<sizeof(p1)<<endl;     //4byte for all data type.
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl; */

    //int *p=(int*)malloc(5*sizeof(int));
    int *p=new int[5];
    cout<<"Enter the value: ";

    for(int i=0;i<5;i++)
    {
        cin>>p[i];
    }
    cout<<"You have entered: ";
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<" ";
    }

    delete []p;

}