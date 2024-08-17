#include<stdio.h>
int fact(int);
void toh(int n,int x,int y,int z){
	if(n>0){
		toh(n-1,x,z,y);
		printf("move top disc from %d to %d\n",x,z);
		toh(n-1,y,x,z);
	}
	
	
}
int main(){
	/*int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	printf("The factorial of %d is: %d\n",num,fact(num));
	*/

/*int disk;
printf("Enter the no of disk:\n");
scanf("%d",&disk);
toh(disk,1,2,3);*/
int num;
printf("Enter element to be serached: ");
scanf("%d",&num);

}
int fact(int a){
	if(a!=1)
	return a*fact(a-1);
	else
	return 1;
}
