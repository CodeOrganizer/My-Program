#include<stdio.h>
#include<string.h>
int main(){
char s1[20]="Rakib ";
printf("s1:%s\n",s1);
char s2[6]="Islam";
printf("s2:%s\n",s2);
//strcpy(s1,s2);  data overwritten
strcat(s1,s2);//data appends
printf("after copying s2 to s1, s1:%s and s2:%s",s1,s2);
printf("\n%d\n%d",strlen(s1),strlen(s2));//length of string
printf("\n%d",strcmp(s1,s2));//string compare
printf("\n%d",strcmp(s2,s1));
char s3[]="ae",s4[]="ac";//if 1st character same,it goes to 2nd character according to ascii code
printf("\n%d",strcmp(s3,s4));//e>c >> s3>s4 >>1
char s5[]="ab",s6[]="ac";
printf("\n%d",strcmp(s5,s6));//b<c >> s5<s6 >> -1
char s7[]="ae",s8[]="ae";
printf("\n%d",strcmp(s7,s8));//s7=s8 >> 0
printf("\nBefore reversing s2 is:%s",s2);
printf("\nAfter reversing s2 is:%s",strrev(s2));
printf("s1 in upper case:%s\n",strupr(s1));
printf("s1 in lower case:%s\n",strlwr(s1));
}
