#include<stdio.h>

int main(){
	//input
	float a,b;
	char math_op,ch,ch2;
do{

do{
	printf("Enter two numbers: ");
	scanf("%f %f",&a,&b);
	printf("Enter the operation(+,-,*,/,%%): ");
	scanf("\n%c",&math_op);
	
	switch(math_op){
	
		case '+': printf("Addition= %.2f",a+b); break;
		case '-': printf("Subtraction= %.2f",a-b); break;
		case '*': printf("Multiplication= %.2f",a*b); break;//if else took 12 lines but switch case took only 7 lines
		case '/': printf("Division= %.2f",a/b); 	break;
		case '%': printf("Modulus= %d",(int)a%(int)b); break;
		default:  printf("Please enter valid input.");}
	printf("\nExit(y/n):");
	scanf("\n%c",&ch);
}while(ch=='N'||ch=='n');
printf("Calcy Terminated!!!\n");
printf("Call Calcy again(y/n): ");
scanf("\n%c",&ch2);}while(ch2=='Y'||ch2=='y');
return 0;
}
//coding using if else:
	
    /*if(math_op=='+')
		printf("Addition= %.2f",a+b);
	else if(math_op=='-')
		printf("Subtraction= %.2f",a-b);
	else if(math_op=='*')
		printf("Multiplication= %.2f",a*b);
	else if(math_op=='/')
		printf("Division= %.2f",a/b);
	else if(math_op=='%')
		printf("Modulus= %d",(int)a%(int)b);
	else
	    printf("Please enter valid input.");*/
