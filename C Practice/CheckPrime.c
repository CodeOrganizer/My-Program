#include<stdio.h> 
 int main() {
 //CHECKING A NUMBER PRIME OR NOT:
 int num,var1,var2;
 char ch;
do{
 printf("Enter the number to check: ");
 scanf("%d",&num);
 var2=0;
 for(var1=2;var1<num;var1++)
 {
 	
 	if(num%var1==0) {
	var2=1;
    break;}
 }
 (var2==1)?printf("NOT PRIME\n"):printf("PRIME\n");
 printf("Do you want to check another number(y or n)?");
 scanf("\n%c",&ch);
}while(ch=='Y'||ch=='y');
printf("Program Terminated!!!");

 return 0; 
 }
