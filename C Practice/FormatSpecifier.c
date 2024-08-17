#include<stdio.h>
int main(){
	/*float item1=5.286;
	float item2=9.256;
	float item3=7.982;
	// %.1=decimal position,%1=minimum field width,%-=left align
	//%lf=double
	printf("item1= $%-8.2f\n",item1);
	printf("item1= $%8.2f\n",item2);
	printf("item1= $%8.2f",item3);*/
	
	//constant
/*	const float PI = 3.14;//It's a good practice to write constant in capital letter always
	printf("value of PI is:%.2f",PI);*/
	
	//arithmatic Operation
	//++ increment by 1
	//-- decrement by 1
	//for changing int to float use- (float)
	
	//int x=10,y=2;
	/*float z=x/(float)y;
//	printf("5/2= %.2f",z);
	x++;y--;
	printf("x= 5 & incremented to= %d\ny= 2 & decremented to= %d",x,y);*/
	
	//augmented assignment operator
	 //x=x+2; 
	 //x+=2;
	// x=x-7;
//	x-=7;
	//x=x*8;
	 //x*=8;
 	//x=x/2; 
	 //x/=2;
	//x=x%3;
	 //x%=3;
	//printf("x=%d",x);
	
	char name[25];
	int age;
	printf("Enter your name:");
	//scanf("%s",&name);//does not allow white space. If you enter white space next scanf doesn't take any input
	fgets(name,25,stdin); //does not allow new line
	printf("\nHow old are you?");
	scanf("%d",&age);
	printf("\nHi %s ,You are %d years old.",name,age);
	return 0;
}

