#include<iostream>
using namespace std;

/* class Arithmetic
{
    private:
    int a;
    int b;
    public:
    Arithmetic(int a,int b);
    int add();
    int sub();  
};
Arithmetic::Arithmetic(int a,int b)
{
    this->a=a;
    this->b=b;
}
int Arithmetic::add()
{
    int c;
    c=a+b;
    return c;
}
int Arithmetic::sub()
{
    int c;
    c=a-b;
    return c;
} */
template<class T>
class Arithmetic
{
    private:
    T a;
    T b;
    public:
    Arithmetic(T a,T b);
    T add();
    T sub();  
};
template<class T>
Arithmetic<T>::Arithmetic(T a,T b)
{
    this->a=a;
    this->b=b;
}
template<class T>
T Arithmetic<T>::add()
{
    T c;
    c=a+b;
    return c;
}
template<class T>
T Arithmetic<T>::sub()
{
    T c;
    c=a-b;
    return c;
}
int main()
{
    Arithmetic<int> ar(10,5);
    cout<<"ADDITION: "<<ar.add()<<endl;
    cout<<"SUBTRACTION: "<<ar.sub()<<endl;
    Arithmetic<float> ar2(10.5,5);
    cout<<"ADDITION: "<<ar2.add()<<endl;
    cout<<"SUBTRACTION: "<<ar2.sub()<<endl;
    Arithmetic<char> ar3('A','B');
    cout<<"ADDITION: "<<(int)ar3.add()<<endl;
    cout<<"SUBTRACTION: "<<(int)ar3.sub()<<endl;
    return 0;
}