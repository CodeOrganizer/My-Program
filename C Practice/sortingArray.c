#include<stdio.h>
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void selection_sort (int arr[],int size){

for(int i=0;i<size-1;i++){
	int min=i;
	for(int j=i+1;j<size;j++){
		if(arr[j]<arr[min])
		min=j;
	}
	swap(&arr[i],&arr[min]);
}
}

int main()
{
int a[5];
printf("provide 5 array datas:\n");

for(int i=0;i<5;i++)
scanf("%d",&a[i]);


printf("The array is:\n");
for(int j=0;j<5;j++)
printf("%d ",a[j]);

int size=sizeof(a)/sizeof(a[0]);

selection_sort(a,size);

printf("\nThe sorted array is:\n");
for(int j=0;j<5;j++)
printf("%d ",a[j]);

/*
//checking largest number:
int first,second;
first=a[0];
for(int k=0;k<5;k++){
	if(a[k]>first)
	first=a[k];
}

//checking 2nd largest number:
for(int i=0;i<5;i++){
if(a[i]!=first)
second=a[i];
}

for(int i=0;i<5;i++){
if(a[i]!=first&&a[i]>second)
second=a[i];
}
printf("\n\n1st and 2nd largest no.: %d %d",first,second);
*/

	

/*
//checking smallest number:
int s;
s=a[0];
int m;
for(m=1;m<5;m++)
if(s>a[m])
s=a[m];
//checking 2nd smallest number:
int s2;
s2=a[0];
int n;
for(n=1;n<5;n++)
if(a[n]!=s&&a[n]<s2)

s2=a[n];*/

//printf("\nvalue in ascending order: %d %d",s,s2);

return 0;
}
