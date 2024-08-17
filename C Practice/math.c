#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main(){
/*	double a=sqrt(3);
	double b=pow(2,8);
	int c=round(3.142);
	int d=ceil(3.89);
	int e=floor(3.89);
	float f=fabs(-2.15);
	float g=log2(1024);
	float h=sin(45);//in radian unit
	float i=cos(45);
//	printf("%lf",b);
printf("%f",i);
*/
/*int age;
printf("\nEnter your age:\n");
scanf("%d",&age);
	if(age>=18){
	printf("You are eligible!");
	}
else if(age==0){
	printf("You have just born.");
}
else{
	printf("Are you fucking kidding me?");
}*/
//char grade;
//printf("Enter your grade:");
//scanf("%c",&grade);
/*if(grade==c){
	printf("You did very good");
}
else if(grade=='B'){
	printf("Try to improve more");
}
else if(grade=='C'){
	printf("At least you not failed!");
}
else if(grade=='D'){
	printf("you are failed!!!");
}
else{
	printf("Please enter a valid grade in capital letter!!!");   
}*/
/*switch(grade){
	case 'A':
		printf("You did very good");
	break;
	case 'B':
		printf("Try to improve more");
	break;
	case 'C':
		printf("At least you not failed!");
	break;
	case 'D':
		printf("you failed!!!");
	break;
	default:
		printf("Please enter a valid grade in capital letter!!!");
}
return 0;*/
char unit;
float temp;
printf("Enter the tempreture unit(C/F):");
scanf("%c",&unit);
printf("Enter the tempreture unit:");
scanf("%f",&temp);
unit=toupper(unit);//uppercase
if(unit=='C'){
	printf("The tempreture in farenheit:%.2f",(temp*9/5)+32);
}
else if(unit=='F'){
	printf("The tempreture in centigrade:%.2f",(5*(temp-32)/9));
}
else{
	printf("Please enter valid unit type i.e., C or F");
}
}
