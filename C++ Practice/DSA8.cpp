#include<iostream>
using namespace std;

void fun1(int a[],int n)
{
   // cout<<sizeof(a)/sizeof(int)<<endl;
   /* for(int x:a)
    cout<<x<<" "; */ //it'll give error begin and end is nit decleared.so we can't apply for 
    //each loop for pointer, we can apply it only for array.
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    a[0]=15;
}
int *fun2(int n)
{
    int *p;
    p=new int[n];

    for(int i=0;i<n;i++)
        p[i]=i+1;
    return p;
}


int main()
{
//     int a[]={2,4,8,6,10};
//     int n=5;
//    // cout<<sizeof(a)/sizeof(int)<<endl;
//     fun(a,n);
//     for(int x:a)
//         cout<<x<<" ";
    int *a;
    a=fun2(5);
    for(int i=0;i<5;i++)
        cout<<a[i]<<" ";


}