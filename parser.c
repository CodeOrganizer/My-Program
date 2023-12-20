#include<stdio.h>
#include<string.h>
void parser(char str[]){
    int in=0,index=0;
for(int i=0;i<strlen(str);i++){

    if(str[i]=='<'){
    in=1;
    continue;}

    else if(str[i]=='>'){
    in=0;
    continue;}

    if (in==0){
    str[index]=str[i];
    index++;}}
    str[index]='\0';

    while(str[0]==' '){
        for(int i=0;i<strlen(str);i++){
            str[i]=str[i+1];
        }
    }
    
    while(str[strlen(str)-1]==' ')
    str[strlen(str)-1]='\0';
    }

int main(){
char str[]="   <h1>  This is a heading       </h1>";

printf("%d\n",strlen(str));
printf("%s\n",str);
parser(str);
printf("%d\n",strlen(str));
printf("%s\n",str);

return 0;
}