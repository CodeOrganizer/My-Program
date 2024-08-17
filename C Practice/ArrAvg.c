#include<stdio.h>
float average(float a[]);
int main()
{
	float a[5]={5,5.9,3,8.9,4};
	printf("average is %f",average(a));
}
float average(float a[])
{
	float avg,sum=0;
	for(int i=0;i<5;i++){
		sum+=a[i];
	}
	avg=sum/5;
	return avg;
}
