#include<stdio.h>
int main(){
	int marks;
	printf("Enter your marks: ");
	scanf("%d",&marks);
/*	if(marks>=60) {
	
		printf("Congrats!!! You got first division.");
	//	printf("Sorry!!!You failed in the examination.");	//providing braces all statements act as a single body 
	//without braces only 1st statement acts as the part of body
	}
	else if(marks>=50)
		printf("Congrats!!! You got second division.");
	else if(marks>=40)
		printf("Congrats!!! You got third division.");
	else
		printf("Sorry!!!You failed in the examination.");*/
		
	//NESTED IF ELSE STATEMENTS:
	if(marks>=40) {
		printf("Congrats!!! You have passed the examination.\n");
			if(marks>=60)
				printf("You got first division.");
			else if(marks>=50)
				printf("You got second division.");
			else if(marks>=40)
				printf("You got third division.");
	}
	else
		printf("Sorry!!!You failed in the examination.");	
		return 0;
	
}
