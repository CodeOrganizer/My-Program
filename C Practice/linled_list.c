#include<stdio.h>
#include<stdlib.h>

struct node{            //create node of linked list
    int data;
    struct node *next;
};

//FUNCTION PROTOTYPE:
struct node *start = NULL;// start pointer of list, initially points to null
struct node *create(struct node *start);
void display(struct node *start);
struct node *add_at_begining(struct node *start);
struct node *add_at_end(struct node *start);
struct node *insert_before(struct node *start);
struct node *insert_after(struct node *start);
struct node *delete_at_begining(struct node *start);
struct node *delete_at_end(struct node *start);
struct node *delete_before(struct node *start);
struct node *delete_after(struct node *start);
struct node *delete_list(struct node *start);
struct node *sort_list(struct node *start);



int main(){
    
    int option;
    do{
        printf("\n******Main Menu******");
        printf("\n1. Create");
        printf("\n2. Display");
        printf("\n3. Add at begining");
        printf("\n4. Add at end");
        printf("\n5. Add a node before a given node");
        printf("\n6. Add a node after a given node");
        printf("\n7. Delete at begining");
        printf("\n8. Delete at end");
        printf("\n9. Delete a node before a given node");
        printf("\n10. Delete a node after a given node");
        printf("\n11. Delete the entire list");
        printf("\n12. Sort the list");
        printf("\n13. Exit");

        printf("\nEnter your option: ");
        scanf("%d",&option);

        switch(option){
            case 1: 
                        start=create(start);
                        break;
            case 2:
                        display(start);
                        break;
            case 3:
                        start=add_at_begining(start);
                        break;
            case 4:
                        start=add_at_end(start);
                        break;
            case 5:
                        start=insert_before(start);
                        break;
            case 6:
                        start=insert_after(start);
                        break;
            case 7:
                        start=delete_at_begining(start);
                        break;
            case 8:
                        start=delete_at_end(start);
                        break;
            case 9:
                        start=delete_before(start);
                        break;
            case 10:
                        start=delete_after(start);
                        break;
            case 11:
                        start=delete_list(start);
                        break;
            case 12:
                        start=sort_list(start);
                        break;
            case 13:
                        printf("\nThank you!!!Visit Again");
                        break;
            default:
                        printf("\nPlease enter valid input");
        }
}while(option!=13);

    return 0;
}


//FUNCTION DEFINITION:
struct node *create(struct node *start){//structure to create a new node which return same structure type
    struct node *new_node, *ptr;
    int val;
    printf("\nEnter the first element:"); //enter -1 to stop entering
    scanf("%d",&val);
    do{
        new_node=(struct node*)malloc(sizeof(struct node));
        new_node->data=val; 
        if(start==NULL){
            start=new_node;
            new_node ->next= NULL;
        }  
        else{
            ptr=start;
            while(ptr->next!=NULL)
                ptr=ptr->next;
                ptr->next=new_node;
                new_node->next= NULL;
            }
    printf("\nEnter the next element [Enter -1 to stop]:"); //enter -1 to stop entering
    scanf("%d",&val);    
    }while(val!=-1);            //-1 inndicates end of the list
return start;
}
void display(struct node *start){
    struct node *ptr=start;
    if(start==NULL){
        printf("The list is empty");
    }
    else{
    printf("The list is: ");
    while (ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("X");
    }
}
struct node *add_at_begining(struct node *start){
    struct node *new_node,*ptr;
    int val;
    printf("\nEnter the element to be added at the begining: ");
    scanf("%d",&val);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    ptr=start;//ptr points to 1st node
    if(start==NULL){
        start=new_node;
        new_node->next=NULL;
        return start;
    }
    else{
    start=new_node;
    new_node->next=ptr;
    return start;
    }
}
struct node *add_at_end(struct node *start){
    struct node *new_node,*ptr;
    int val;
    printf("\nEnter the element to be added at the begining: ");
    scanf("%d",&val);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    ptr=start;//ptr points to 1st node
    if(start==NULL){
        start=new_node;
        new_node->next=NULL;
        return start;
    }
    else{
    while(ptr->next!=NULL)
        ptr=ptr->next;
    ptr->next=new_node;
    new_node->next=NULL;
    return start;
    }
}
struct node *insert_before(struct node *start){
    struct node *new_node,*ptr,*preptr;
    int val,key;
    printf("\nEnter the value of the new element: ");
    scanf("%d",&val);
    printf("\nEnter the element before which new element to be inserted: ");
    scanf("%d",&key);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    ptr=start;//ptr points to 1st node
    preptr=NULL;
    
    while(ptr!=NULL && ptr->data!=key){
        preptr=ptr;
        ptr=ptr->next;
        }
    if(start==NULL){
        printf("\nThe list is initially empty");
        free(new_node);
        return start;
    }
    else if(preptr==NULL && ptr!=NULL){   //key present at 1st node
        new_node->next=ptr;
        start=new_node;
        return start;
    }
    else if(ptr==NULL && preptr!=NULL){     
        printf("\nThe element is not present in the list");
        free (new_node);
        return start;
    }
    else{
    preptr->next=new_node;
    new_node->next=ptr;}
    return start;
}
struct node *insert_after(struct node *start){
    struct node *new_node,*ptr;
    int val,key;
    printf("\nEnter the value of the new element: ");
    scanf("%d",&val);
    printf("\nEnter the element before which new element to be inserted: ");
    scanf("%d",&key);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    ptr=start;//ptr points to 1st node
    while(ptr!=NULL && ptr->data!=key){
        ptr=ptr->next;
        }
    if(start==NULL){
        printf("\nThe list is initially empty");//empty list
        free(new_node);
        return start;
    }
    
    else if(ptr==NULL && start!=NULL){     
        printf("\nThe element is not present in the list");
        free (new_node);
        return start;
    }
    else{
    new_node->next=ptr->next;
    ptr->next=new_node;
    }
    return start;
}
struct node *delete_at_begining(struct node *start){
    struct node *ptr;
    int val;
    if(start==NULL){
        printf("The list is already empty");
    }
    else{
        ptr=start;
        val=ptr->data;
        start=ptr->next;
        free(ptr);
        printf("\nThe item deleted: %d",val);
    }
    return start;
}
struct node *delete_at_end(struct node *start){
    struct node *ptr,*preptr;
    int val;
    if(start==NULL){
        printf("\nThe list is already empty");
    }
    else{
        ptr=start;
        while(ptr->next!=NULL){
            preptr=ptr;
            ptr=ptr->next;
        }
        val=ptr->data;
        preptr->next=NULL;
        free(ptr);
        printf("\nThe item deleted: %d",val);
    }
    return start;
}
struct node *delete_before(struct node *start){
struct node *ptr,*preptr;
    int val,key;
    if(start==NULL){
        printf("\nThe list is already empty");
        return start;
    }
    
    printf("\nEnter the element before which is to be deleted: ");
    scanf("%d",&key);
    ptr=start;
    preptr=NULL;
    if(ptr->data==key){
        printf("\nThere is no element before this element");
        return start;
    }
    while(ptr->next!=NULL && ptr->next->data!=key){ //NOTE: segmentation fault may occour if you intrechange this
        preptr=ptr;
        ptr=ptr->next;
    }
    if(start!=NULL && ptr->next==NULL){
        printf("\nThe item is not present in the list.");
        return start;
    }
    val=ptr->data;
    if(preptr!=NULL)
        preptr->next=ptr->next;
    else
        start=ptr->next;
    free(ptr);
    printf("\nThe item deleted: %d",val);
    return start;
}
struct node *delete_after(struct node *start){
struct node *preptr,*ptr;
    int val,key;
    if(start==NULL){
        printf("\nThe list is already empty.");
        return start;
    }
    preptr=start;
    ptr=NULL;
    printf("\nEnter the element after which the element will be deleted: ");
    scanf("%d",&key);
    while(preptr!=NULL && preptr->data!=key){
        preptr=preptr->next;
    }
    if(preptr==NULL){
        printf("\nThe element is not present in the list.");
        return start;
    }
    else if(preptr->next==NULL && preptr->data==key){
        printf("\nThere is no element after this element to be deleted.");
        return start;
    }
    else{
        ptr=preptr->next;
        val=ptr->data;
        preptr->next=ptr->next;
        free(ptr);
        printf("\nThe item deleted: %d",val);
        return start;
    }
}
struct node *delete_list(struct node *start){
    struct node *ptr;
    if(start==NULL){
        printf("\nThe list is initially empty.");
        return start;
    }
    else{
        ptr=start;
        while(ptr!=NULL){
            printf("\nThe deleted element is: %d",ptr->data);
            start=start->next;
            free(ptr);
            ptr=start;
        }
        return start;
    }
}
struct node *sort_list(struct node *start){
   if(start==NULL){
        printf("\nThe list is already empty.");
        return start;
   }
   struct node *ptr1,*ptr2;
   int temp;
   ptr1=start;
   while(ptr1->next!=NULL){
        ptr2=ptr1->next;
            while(ptr2!=NULL){
                if(ptr1->data>ptr2->data){
                    temp=ptr2->data;
                    ptr2->data=ptr1->data;
                    ptr1->data=temp;
                }
                ptr2=ptr2->next;
            }
            ptr1=ptr1->next;
   }
   printf("\nThe list is now sorted");
   return start; 
}
















