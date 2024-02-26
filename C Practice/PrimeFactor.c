#include<stdio.h>
int isprime(int i){
	int a,m=0;
	for(a=2;a<i;a++){
		if(i%a==0){
			m=1;//not prime
			break;
		}
	}
	if(m==1)
	return 0;
	else return 1;//prime
}
int main(){
int i,num;
char ch;

do{
printf("Enter the number: ");
scanf("%d",&num);
if(num==0||num==1)
printf("%d has no prime factors.",num);
else{
printf("Prime factor of given number is: ");
int index=0;
for(i=2;i<num;i++){
	if(num%i==0 && isprime(i)==1){
	if(index==0){
	printf("%d",i);
	index=1;}
	else
	printf(", %d",i);
	}
}

if(index==0)
printf("Prime factor of given number is: %d",num);

}
printf("\nCheck another number(y/n): ");
scanf("\n%c",&ch);
if(ch=='N'||ch=='n')
printf("\n\33[31mProgram Terminated!!!\33[0m");
}while(ch=='Y'||ch=='y');//while condition true programm will continue

return 0;
}
