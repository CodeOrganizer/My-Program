#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int length;
    int breadth;
    public:
    Rectangle()
    {
        length=0;          //default Constructor
        breadth=0;      
    }
    Rectangle(int l,int b)
    {
        length=l;         //parameterized constructor
        breadth=b;      
    }
    int area()
    {
        return length*breadth;      //Facilitator
    }
    int perimeter()
    {
        return 2*(length+breadth);   //Facilitator
    }
    int getLength()
    {
        return length;              //Accessor
    }
    int getBreadth()
    {
        return breadth;            //Accessor
    }
    void setLength(int l)
    {
        length=l;                 //Mutator
    }
    void setBreadth(int b)
    {
        breadth=b;                //Mutator
    }
    ~Rectangle()
    {
        cout<<"\nDESTRUCTED";      //Destructor: it runs by defalut to destruct object after finishing task
        //here may be free dynamically allocated memory. The cout for visualization perpose.
    }
};


int main()
{
    Rectangle r(10,5);
    cout<<"Length is: "<<r.getLength()<<endl;
    cout<<"Breadth is: "<<r.getBreadth()<<endl;
    cout<<"Area is: "<<r.area()<<endl;
    cout<<"Perimeter is: "<<r.perimeter()<<endl;
    r.setLength(20);
    r.setBreadth(10);
    cout<<"Length is: "<<r.getLength()<<endl;
    cout<<"Breadth is: "<<r.getBreadth()<<endl;
    cout<<"Area is: "<<r.area()<<endl;
    cout<<"Perimeter is: "<<r.perimeter()<<endl;

}