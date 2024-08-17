/*Struct=collection of releated variables of same or different types
listed under one name in a block of memory
very similar to classes in other language but without method */
/*Union= union is same as structure.it's also user defined data.
The only difference is inspite of different memory blocks for the members, It shared a shared memory
block for the all member.The size of memory is the size of the larger data type among all the members.
only one member can use the memory in a single moment.
*/
#include<stdio.h>
#include<string.h>

struct Player{ //typedef struct{
    char name[10];
    int score;
};//Player;// 
/*typedef union{
    char name[10];
    int id;
}sl;*/
int main(){
    struct Player player1={"xposed",78}; //If we use typedef then insted of writting "struct Player player1"
    //we can simply write "Player player1"
    struct Player player2;
    struct Player player3={"panther",100};
    struct Player player4={"thor",105};
    player1.score=99;
    strcpy(player2.name,"korag");
    player2.score=95;
    //Array of Struct
    struct Player AllPlayer[]={player1,player2,player3,player4};
    
    
    for(int i=0;i<sizeof(AllPlayer)/sizeof(AllPlayer[0]);i++){
        printf("%-8s",AllPlayer[i].name);
        printf("%4d\n",AllPlayer[i].score);
    }
}
    /*sl student1={"Rakib",4560};//due to excess element in union data type only 1st element is stored
    sl student1;
    student1.id=4560;
    strcpy(student1.name,"Rakib");
    printf("%s\n",student1.name);
    printf("%d\n",student1.id);/*only which data will be added recently that will show correct value
                                  other data will so corrupt value  */

                                  
   /* printf("%s\n",player1.name);
    printf("%d\n",player1.score);
    printf("%s\n",player2.name);
    printf("%d\n",player2.score);*/
