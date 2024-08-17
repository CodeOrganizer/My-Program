#include<stdio.h>
#include<stdlib.h>
int main(){
	char number[100],num[100],num2[100];
  FILE *a;
	a=fopen("/Users/iraki/Desktop/rakib.txt","a+");
	scanf("%s %s",&number,num2);
    fprintf(a,"%s\n%s\n",number,num2);
    rewind(a);
    printf("contents of file:\n");
    while (fgets(num,100,a)){
    	printf("%s",num);  
	}
	fclose(a);
	return 0;
	
}
