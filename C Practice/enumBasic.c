//enum is not sting,treaterd as integer.
//enum makes program more readable.
//enum can be decleard within or outside main function

#include<stdio.h>
enum day{mon=1,tue,wed,thu,fri,sat,sun};


int main(){
enum day today=mon;
if(today==sun||today==6)
printf("Enjoy the weekend");
else
printf("You have to work");

enum day yesterday;
printf("\n%d",today);
printf("\n%d",yesterday);}