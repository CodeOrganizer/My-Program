#include<stdio.h>
#define SIZE 5//good practice to set size as constant and always in CAPITAL
int main()
{	
	printf("Enter the marks of %d students: ",SIZE);
	float marks[SIZE];
	//input
	int var1,var2;
	for(var1=0;var1<SIZE;var1++)
	scanf("%f",&marks[var1]);
	//output
	for(var2=0;var2<SIZE;var2++)
	printf("%.2f ",marks[var2]);
	return 0;
}

