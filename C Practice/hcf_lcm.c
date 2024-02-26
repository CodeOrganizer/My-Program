#include<stdio.h>
//creating function for hcf of two numbers***************************************************************
int gcd(int a,int b)
{
int temp;//temporary variable to store a%b
while(b!=0)
{
temp=a%b;
a=b;
b=temp;
}
return a;	
}
//creating function for lcm of two numbers***************************************************************
int lcm(int a,int b)
{
	int max=a>b?a:b;//finding max of two
	int c=max;
	while(1)
	{
		if(max%a==0&&max%b==0)
		break;
		max+=c;//return multiple of max
	}
	return max;
}
int main()
{
//array input*******************************************************************************************
int size;
printf("How many numbers:\n");
scanf("%d",&size);
int a[size];
printf("Enter the numbers:\n");
for(int i=0;i<size;i++)
	scanf("%d",&a[i]);
	
//calculating hcf & lcm of array:***********************************************************************
int hcf=a[0],getlcm=a[0];
for(int j=1;j<size;j++)
{
hcf=gcd(hcf,a[j]);
getlcm=lcm(getlcm,a[j]);	
}
//changing -ve sign to +ve in case of input is -ve integer**********************************************
hcf=(hcf<0)?-hcf:hcf;
getlcm=(getlcm<0)?-getlcm:getlcm;


//array output:*****************************************************************************************
printf("\nhcf of ");
for(int l=0;l<size-1;l++)
printf("%d,",a[l]);
printf(" %d",a[size-1]);
printf(" is: %d",hcf);

printf("\nlcm of ");
for(int l=0;l<size-1;l++)
printf("%d,",a[l]);
printf(" %d",a[size-1]);
printf(" is: %d",getlcm);

return 0;	
}
//**********************************IGNORE THE BELOW CODE*********************************************//
	//calculating gcd or hcf of some given numbers:
	/*int a,b,hcf,max;
	printf("Enter the numbers: \n");
	scanf("%d%d",&a,&b);
	for(int i=1;i<=a&&i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		{
			hcf=i;
			
		}
	}
	printf("Hcf of given number is: %d\n",hcf);
	
	//calculating lcm
	
	lcm=(a*b)/hcf;
	printf("lcm of given number is: %d\n",lcm);
	max=a>b?a:b;
	while(1){
		if(max%a==0&&max%b==0)
		break;
		max++;
	}
	printf("lcm of given number is: %d\n",max);	
********************************************************************************************************/
