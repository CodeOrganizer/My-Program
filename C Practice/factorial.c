#include<stdio.h>
int main(){
	long num,i,m=1;
	printf("Enter the number: ");
	scanf("%ld",&num);

	for(i=1;i<=num;i++){
		m*=i;
		
	}
	printf("Factorial of given number is: %ld",m);
}
