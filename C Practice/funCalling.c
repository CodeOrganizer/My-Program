#include<stdio.h>
//CALL BY VALUE
int swap(int,int );
int main()
 {
	int a=25,b=30;
	printf("before swaping a is %d and b is %d\n",a,b);
	swap(a,b);//provide swapped output but main variable value is same
	printf("after swaping a is %d and b is %d(in main function)\n",a,b);//a=25, b=30
	return 0;
 }
 int swap(int a,int b)
 {
 	/*int t=a;      
 	a=b;
 	b=t;*/
	a=a+b;
	b=a-b;
	a=a-b;
 	printf("after swaping in function, a is %d and b is %d\n",a,b);
 }
//CALL BY REFERENCE
/*int swap(int *,int *);
int main()
 {
	int a=25,b=30;
	printf("before swaping a is %d and b is %d\n",a,b);
	swap(&a,&b);
	printf("after swaping a is %d and b is %d(in main function)\n",a,b);
	return 0;
 }
 int swap(int *a,int *b)
 {
 	int t=*a;
 	*a=*b;
 	*b=t;
 	printf("after swaping in function, a is %d and b is %d\n",*a,*b);
 }*/
