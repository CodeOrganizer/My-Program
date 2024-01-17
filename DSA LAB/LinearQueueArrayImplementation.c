//Question: Write a C program to implement linear queue operation insert,delete,display on array.
//Code:
#include<stdio.h>
#define MAX 3
int queue[MAX],front=-1,rear=-1;

void queue_insert(int queue[],int val){
    if(rear==MAX-1)
        printf("\nQueue Overflow");
    else {
    if(front==-1 && rear==-1)
        front=rear=0;
    else
        rear++;
    queue[rear]=val;}
}
int queue_delete(int queue[]){
    int x;
    if(front==-1&&rear==-1){
        printf("\nQueue Underflow");
        return -1;
    }
    else{
        x=queue[front];
        front++;
        if(front>rear)
        front=rear=-1;
        return x;
    }
}
void display(int queue[]){
    if(front==-1&&rear==-1)
        printf("\nQueue is empty");
    else{
        for(int i=front;i<=rear;i++)
        printf("%d ",queue[i]);
    }
}

int main(){
int option,val;
do{
    printf("\n*****Main Menu*****");
    printf("\n1. INSERT");
    printf("\n2. DELETE");
    printf("\n3. Display");
    printf("\n4. EXIT");
    printf("\nEnter your option: ");
    scanf("%d",&option);
        switch(option){
            case 1: printf("\nEnter the element to be inserted in the queue: ");
                    scanf("%d",&val);
                    queue_insert(queue,val);
                    break;
            case 2: val=queue_delete(queue);
                    if(val!=-1)
                    printf("The element removed from the queue: %d",val);
                    break;

            case 3: display(queue);
                    break;
        }
}while(option!=4);
}

//Output:
/*
*****Main Menu*****
1. INSERT
2. DELETE
3. Display
4. EXIT
Enter your option: 1

Enter the element to be inserted in the queue: 4

*****Main Menu*****
1. INSERT
2. DELETE
3. Display
4. EXIT
Enter your option: 1

Enter the element to be inserted in the queue: 7

*****Main Menu*****
1. INSERT
2. DELETE
3. Display
4. EXIT
Enter your option: 1

Enter the element to be inserted in the queue: 2

*****Main Menu*****
1. INSERT
2. DELETE
3. Display
4. EXIT
Enter your option: 1 

Enter the element to be inserted in the queue: 3

Queue Overflow
*****Main Menu*****
1. INSERT
2. DELETE
3. Display
4. EXIT
Enter your option: 3
4 7 2
*****Main Menu*****
1. INSERT
2. DELETE
3. Display
4. EXIT
Enter your option: 2
The element removed from the queue: 4
*****Main Menu*****
1. INSERT
2. DELETE
3. Display
4. EXIT
Enter your option: 3
7 2
*****Main Menu*****
1. INSERT
2. DELETE
3. Display
4. EXIT
Enter your option: 2
The element removed from the queue: 7
*****Main Menu*****
1. INSERT
2. DELETE
3. Display
4. EXIT
Enter your option: 2
The element removed from the queue: 2
*****Main Menu*****
1. INSERT
2. DELETE
3. Display
4. EXIT
Enter your option: 2

Queue Underflow
*****Main Menu*****
1. INSERT
2. DELETE
3. Display
4. EXIT
Enter your option: 3

Queue is empty
*****Main Menu*****
1. INSERT
2. DELETE
3. Display
4. EXIT
Enter your option: 4
PS C:\Users\iraki\Desktop\My Program\DSA LAB>
*/