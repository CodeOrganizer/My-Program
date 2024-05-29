#include<iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
void fun(struct Rectangle r1)
{
    cout<<"Call by value:"<<endl<<"Length: "<<++r1.length<<" Breadth: "<<r1.breadth<<endl;
}
void fun1(struct Rectangle &r1)
{
    cout<<"Call by references:"<<endl<<"Length: "<<++r1.length<<" Breadth: "<<r1.breadth<<endl;
}
void fun2(struct Rectangle *r1)
{
    cout<<"Call by adress:"<<endl<<"Length: "<<++r1->length<<" Breadth: "<<r1->breadth<<endl;
}
struct Rectangle *fun3()
{
    struct Rectangle *p=new Rectangle;
    //p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length=15;
    p->breadth=7;
    return p;
}
int main()
{
    Rectangle r={10,5};
    fun(r);
    cout<<"Main:"<<endl<<"Length: "<<r.length<<" Breadth: "<<r.breadth<<endl;
    
    fun1(r);
    cout<<"Main:"<<endl<<"Length: "<<r.length<<" Breadth: "<<r.breadth<<endl;
    
    fun2(&r);
    cout<<"Main:"<<endl<<"Length: "<<r.length<<" Breadth: "<<r.breadth<<endl;
    
    struct Rectangle *ptr=fun3();
    cout<<"length: "<<ptr->length<<endl<<"breadth: "<<ptr->breadth<<endl;
    return 0;
}