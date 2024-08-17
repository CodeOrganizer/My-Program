#include<stdio.h>
int main(){
    char a='x',b='y',c[3]={'z'};
    printf("%c\n%c\n%s\n",a,b,c);
    printf("%p\n%p\n%p\n",&a,&b,&c);
    printf("%d\n%d\n%d\n",&a,&b,&c);
}
/*
memory is array of bytes.
each memory block has size of 1 bytes.
each memory block has a specific address
it provides contigious memory allocation while running a programm.

*/