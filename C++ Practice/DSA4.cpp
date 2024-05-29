#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int &r=a;
	cout <<a<<endl<<r<<endl;
	r=15;
	cout <<a<<endl<<r<<endl;
	int &p=a;
	cout <<a<<endl<<r<<endl<<p<<endl;

}