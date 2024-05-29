//MODULAR PROGRAMING USING STRUCTURE & FUNCTION:
#include<iostream>
using namespace std;
/* struct Rectangle
{
    int length;
    int breadth;
};
void initialize(struct Rectangle *r,int l,int b)
{
    r->length=l;
    r->breadth=b;
}
int area(struct Rectangle r)
{
    return r.length*r.breadth;
}
int peri(struct Rectangle r)
{
    return 2*(r.length+r.breadth);
} */

/* struct Rectangle
{
    int length;
    int breadth;

void initialize(int l,int b)
{
    length=l;
    breadth=b;
}
int area()
{
    return length*breadth;
}
int peri()
{
    return 2*(length+breadth);
}
};


int main()
{
    struct Rectangle r={0,0};
    int l=0,b=0;
    cout<<"Enter length & breadth"<<endl;
    cin>>l>>b; */
    /* initialize(&r,l,b);
    cout<<"Area= "<<area(r)<<endl;
    cout<<"Perimeter= "<<peri(r)<<endl; */

   /*  r.initialize(l,b);
    cout<<"Area= "<<r.area()<<endl;
    cout<<"Perimeter= "<<r.peri()<<endl;
} */


// Class & Object Orientation
class Rectangle
{

         //in class everthing is by default private, so we've to declear private 
    int length;
    int breadth;

public:
Rectangle(int l,int b)
{
    length=l;
    breadth=b;
}
int area()
{
    return length*breadth;
}
int peri()
{
    return 2*(length+breadth);
}
};


int main()
{
    //struct Rectangle r;//r={0,0};  like structure we can't directly initialize in class
    int l,b;
    cout<<"Enter length & breadth"<<endl;
    cin>>l>>b;
    Rectangle r(l,b);
    cout<<"Area= "<<r.area()<<endl;
    cout<<"Perimeter= "<<r.peri()<<endl;
}