#include<stdio.h>
#include<stdlib.h>

int main() 
{
/*char ch,s[100],sen[100];
scanf("%c\n%s\n%[^m]s",& ch,&s,&sen);//last string take upto m
printf("%C\n%s\n%s",ch,s,sen);
    return 0;*/
    
    int m,n;
    float x,y;
    printf("Enter the two integers:\n");
    scanf("%d %d",&m,&n);
    printf("Enter the two floats:\n");
    scanf("%f %f",&x,&y);
    
    printf("%d %d\n%.1f %.1f",m+n,m-n,x+y,x-y);
	
    return 0;
}
