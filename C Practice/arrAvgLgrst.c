#include<stdio.h>
//FINDING LARGEST AND SECOND LARGEST OF AN ARRAY:
float average(float *a);//Arrary passing >> you can also pass only float a
float largest(float *a,int size){
	float big=a[0];
	for(int i=1;i<size;i++){
	if (big<a[i]){
			big=a[i];
	}

	}
return big;	
}
int main()
{
	float a[5]={5.9,8.9,3,5,10};
	printf("average is %f\n",average(a));
	int size=sizeof(a)/sizeof(a[0]);
	printf("largest is %f\n",largest(a,size));
	float l2=0;
	for(int i=0;i<size;i++){
		if(a[i]!=largest(a,size)){
		l2=a[i];	
		}
	}
	for(int i=0;i<size;i++){
		if(a[i]!=largest(a,size)&&a[i]>l2){
		l2=a[i]	;
		}
	}
	printf("2nd largest is %f\n",l2);
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
