#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
printf("Enter the size: ");
int n;
scanf("%d",&n);
int A[n];

for(int i=0;i<5;i++)
    scanf("%d",&A[i]);
for(int x:A)
    cout<<x<<" ";
}