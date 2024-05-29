#include <iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a=10,b=5;
    /* cout<<"a,b: "<<a<<","<<b<<endl;
    swap(a,b);
    cout<<"a,b: "<<a<<","<<b<<endl; */
    cout<<"a,b: "<<a<<","<<b<<endl;
    swap(a,b);
    cout<<"a,b: "<<a<<","<<b<<endl;
}