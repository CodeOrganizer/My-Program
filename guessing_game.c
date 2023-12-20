#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    const int MIN=2;
    const int MAX=100;
    int guess,guesses=0,answer;
    

    srand(time(0));
    answer=rand()%MAX+MIN;
    do{
        printf("Enter your guess: ");
        scanf("%d",&guess);
        if(guess>answer)
        printf("\33[31mToo high!\33[0m\n");
        else if(guess<answer)
        printf("\33[31mToo low!\33[0m\n");
        else
        printf("\n\33[31mCorrect!\33[0m\n\n");
        guesses++;
     }while(answer!=guess);
    printf("Answer: %d\n",answer);
    printf("\33[31mGuesses: %d\33[0m\n",guesses);
}