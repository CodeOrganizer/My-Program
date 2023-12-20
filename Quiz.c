#include<stdio.h>
#include<ctype.h>
int main(){
    char questions[][100]={ "1.Who is the father of C Language?",
                            "2.All keywords in C are in______",
                            "3.Which of the following cannot be a variable name in C?"};
    char options[][100]={   "A. Steve Jobs","B. James Gosling","C. Dennis Ritchie","D. Rasmus Lerdof",
                            "A. LowerCase","B. UpperCase", "C. CamelCase", "D. None",
                            "A. volatile","B. true","C. friend","D. export"};
    char answers[3]={'C','A','A'};
    int NoOfques= sizeof(questions)/sizeof(questions[0]);

    char guess;
    int score=0;
    for(int i=0;i<NoOfques;i++){
        printf("***************\n");
        printf("%s\n",questions[i]);
        for(int j=i*4;j<i*4+4;j++){
        printf("%s\n",options[j]);
         
        }
       printf("***************\n");
        printf("Guess: ");

       // guess=getchar();
        scanf("%c", &guess);
        fflush(stdin);
        guess=toupper(guess);
        if(guess==answers[i]){
            printf("Correct!\n");
            score++;
        }
        else
            printf("Wrong!\n");

    }
    printf("***************\nTotal Score:%d/%d\n***************",score,NoOfques);
}