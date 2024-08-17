#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    /*//srand(time(0));
    srand(4);
    int num1=(rand()%5)+1;//random number 0 to 32767. modulo op returns 0 to 5
    printf("%d\n",num1);*/
    
    //Random Password Generator
    int length;
    printf("Enter password length: ");
    scanf("%d",&length);
    srand(time(0));
    printf("Your password is: ");
    for(int i=0;i<length;i++){
        printf("%c",rand()%92+33);
    }

}