#include<iostream>
#include<stdlib.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
    /* struct Rectangle r={10,5};
    struct Rectangle *p=&r;
    (*p).length=20;
    cout<<p->length<<endl;
    cout<<r.length<<endl; */

    Rectangle *p;
    //p=(struct Rectangle*)malloc(sizeof(struct Rectangle));
    //p->length=5;
    //p->breadth=3;
    p=new Rectangle;
    p->length=5;
    p->breadth=3;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
    delete p;
}