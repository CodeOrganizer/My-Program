#include<stdio.h>
int main()
{	int r1,c1,r2,c2;
	printf("Enter no. of row of 1st matrix:\n");
	scanf("%d",&r1);
	printf("Enter no. of column of 1st matrix:\n");
	scanf("%d",&c1);
	
	printf("Enter no. of row of 2nd matrix:\n");
	scanf("%d",&r2);
	printf("Enter no. of column of 2nd matrix:\n");
	scanf("%d",&c2);
	int a[r1][c1],b[r2][c2],r[r1][c2];
	if(c1!=r2)
	{
		printf("Multiplication is not possible\n");
		goto here;
	}
	printf("Enter the 1st matrix:\n");
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		scanf("%d", & a[i][j]);
	}
	
	printf("Enter the 2nd matrix:\n");
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		scanf("%d", &b[i][j]);
	}
		
	//result
	
	for(int i=0;i<r1;i++)
	{	
		for(int j=0;j<c2;j++)
		{
			r[i][j]=0;
				for(int k=0;k<c1;k++)
				{
				r[i][j] += a[i][k]*b[k][j];
				}
		
		}
		
	}
	
	//output
	printf("The first matrix is:\n");
		for(int i=0;i<r1;i++)
	{	
		for(int j=0;j<c1;j++)
		{
			printf("%d\t",a[i][j]);
		
		}
		printf("\n");
		
	}
	printf("The second matrix is:\n");
		for(int i=0;i<r2;i++)
	{	
		for(int j=0;j<c2;j++)
		{
			printf("%d\t",b[i][j]);
		
		}
		printf("\n");
		
	}
	printf("The result matrix is:\n");
	for(int i=0;i<r1;i++)
	{	
		for(int j=0;j<c2;j++)
		{
			printf("%d\t",r[i][j]);
		
		}
		printf("\n");
		
	}
	//with the help of this program we can print table by using (single column matrix*single row matrix)
	
	
/*	printf("Result is:\n");
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		printf("%d\t",result[i][j]);
		printf("\n");
	}*/
	
/*
	int row,column;
	printf("Enter no. of row:\n");
	scanf("%d",&row);
	printf("Enter no. of column:\n");
	scanf("%d",&column);
	int a[row][column],b[row][column],result[row][column];
	
	printf("Enter the 1st matrix:\n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		scanf("%d",&a[i][j]);
	}
	
	printf("Enter the 2nd matrix:\n");
	for(int k=0;k<row;k++)
	{
		for(int l=0;l<column;l++)
		scanf("%d",&b[k][l]);
	}
	printf("Result is:\n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		printf("%d\t",a[i][j]+b[i][j]);
		printf("\n");
	}
	*/
	here:
		return 0;
}
