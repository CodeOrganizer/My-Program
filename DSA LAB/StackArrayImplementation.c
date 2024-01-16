//Question: Write a C program to implement stack operation push,pop,display on array.
//Code:
#include<stdio.h>
#include<string.h>

#define MAX 3 //Maximum size of stack array
int stack[MAX], top=-1; //top is initially null i.e., -1
void push(int stack[],int val){
        if(top==MAX-1)
            printf("\nStack Overflow");
        else{
        top++;
        stack[top]=val;}
    }
int pop(int stack[]){
        int x;
        if(top==-1){
            printf("\nStack Underflow");
        return -1;}
        else{
        x=stack[top];
        top--;
        return x;}
    }
void peek(int stack[]){
        if(top==-1)
            printf("\nStack is empty.");
        else
            printf("\nThe value stored at the top of the stack: %d",stack[top]);
}
void display(int stack[]){
    if(top==-1){
        printf("\nStack is empty.");
    }
    else{
    for(int i=top;i>=0;i--)
        printf("\n%d",stack[i]);
    }
}
int main(){
    int option,val;
    
 do{
    printf("\n*****Main Menu*****");
    printf("\n1. PUSH");
    printf("\n2. POP");
    printf("\n3. PEEK");
    printf("\n4. DISPLAY");
    printf("\n5. EXIT");
    printf("\nEnter your option: ");
    scanf("%d",&option);
    

    switch(option){

            case 1: 
                    printf("\nEnter the element to be added on stack: ");
                    scanf("%d",&val);
                    push(stack,val);
                    break;
            case 2:
                    val=pop(stack);
                    if(val!=-1)
                    printf("\nThe element is removed from the stack: %d",val);
                    break;
            case 3:
                    peek(stack);
                    break;
            case 4:
                    display(stack);
    }
 }while(option!=5);

}
//output:
/*
*****Main Menu*****
1. PUSH
2. POP
3. PEEK
4. DISPLAY
5. EXIT
Enter your option: 1

Enter the element to be added on stack: 25
*/