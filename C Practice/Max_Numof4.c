#include<stdio.h>
int max_of_four(int a,int b,int c,int d){
	int Max;
	if(a>b&&a>c&&a>d){
		Max=a;
	}
	else if(b>a&&b>c&&b>d){
		Max=b;
    }
    else if(c>a&&c>b&&c>d){
		Max=c;
    }
    else{
    	Max=d;
    }
return Max;
}
int main(){
	int a,b,c,d;
	printf("Enter four numbers:\n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int ans= max_of_four(a,b,c,d);
	printf("The maximum number: %d",ans);
	return 0;
}
