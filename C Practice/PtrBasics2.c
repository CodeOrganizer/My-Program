#include<stdio.h>

int main()
{
	int num1=12,num2=5,*ptr1=&num1,*ptr2=&num2;
	printf("pointed value:%d\n",*ptr1);
	printf("pointer value:%d\n",ptr1++);//increment of pointer
	printf("after increment:%d\n",ptr1);
	ptr1--;//decrement of pointer
	printf("pointed value after increment and decrement by same:%d\n",*ptr1);
	*ptr1=0;
	printf("addition:%d\n",*ptr1+*ptr2);//addition of pointer
	if(*ptr1>*ptr2)//comparision of pointer
	printf("num1 is greater\n");
	else
	printf("num2 is greater\n");
	
	//swaping two numbers
	
	int p=89,q=52;
	printf("value of p & q: %d & %d\n",p,q);
	int *x=&p,*y=&q,temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("value of p & q after swapping: %d & %d\n",p,q);
	
	int *a;//wild pointer
	int *b= NULL;//null pointer
	void *c;
	printf("wild pointer: %d\n",a);
	printf("null pointer: %d\n",b);
	printf("void pointer: %d",c);
	
	
}
