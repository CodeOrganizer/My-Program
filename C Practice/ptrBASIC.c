#include<stdio.h>
int main()
{
	int a=10;//If pointer and variable are of different type provides warning incompatible pointer type`
	int *b=&a;//It always takes 4 byte.
	printf("value of a:%d\n",a);
	printf("address of a:%d\n",&a);
	printf("address of b:%d\n",&b);
	printf("value of b:%d\n",b);
	printf("pointed value of b:%d\n",*b);

	*b+=2;
	
	printf("value of b after pointed increment:%d\n",b);
	printf("pointed value of b after increment:%d\n",*b);
	printf("new value of a:%d\n",a);
	printf("%d bytes\n",sizeof(a));
	printf("%d bytes\n",sizeof(b));
}
/*
Pounter: pointer is a variable that store address of another variable of same data type
* = indirection operator (means value at adress)
It's called dereferencing.
*/