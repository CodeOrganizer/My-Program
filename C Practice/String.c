//array of character or string input in c
#include<stdio.h>
//#include<stdlib.h>
int main(){
	
	char c[7]={'a','p','p','l','e'};
	
	printf("Array of character or string input has taken of size 7 byte:apple\n");
	printf("via printf function enteted space at 5th index: %s\nVia puts function entered d at 6th index: ",c);
	c[5]=' ';c[6]='d';
	
	puts(c);
	return 0;
}
