#include<stdio.h>

int main()
{
//2d array input:
	int mark[2][3];
	int count=1;
	for(int i=0;i<2;i++)
	{
		
		for(int j=0;j<3;j++)
		{
		
		printf("Enter the mark of student no. [%d]: ",count);
		scanf("%d",&mark[i][j]);
		count++;
		}
	}
	printf("\n\nEntered marks are: ");
		for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
		
		printf("%d ",mark[i][j]);
		
		}
	}

	return 0;
}
