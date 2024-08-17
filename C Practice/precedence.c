#include<stdio.h>
int main(){
	int a;
	a=11<6<12&&10>71/60;//same precedence>left to right 11<6(false:0)> 0<12(true:1) > 71/60=1.183(higher precedent) > 10>1.183(True:1) > 1&&1=1
	//char b='a';
	
	
//	printf("The number is: %d \n",a++);
//	printf("pre decrenent: %d\n",--a);
	printf("updated number: %d",a);//output:1
}
