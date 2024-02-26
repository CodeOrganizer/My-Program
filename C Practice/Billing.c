#include<stdio.h>
int main(){
float unit,amount,a,b,con_unit,rate;
char response;
do{
    printf("\n\33[1m\33[32m*****Enter Electric Bill Data*****\33[0m\n");
    do{
    printf("\n\33[35mTotal electric bill: Rs. ");
    scanf("%f",&amount);
    printf("Total unit: ");
    scanf("%f",&unit);
    if(amount<unit)
    printf("\n\33[31m\33[1mPlease Check!!! Bill Amount is less than total unit.\33[0m\n");
    }while(amount<unit);

    printf("\n\n\33[1m\33[32m*****Enter Your Meter Reading*****\33[0m\n");
    do{
    printf("\n\33[35mPresent reading: ");
    scanf("%f",&a);
    printf("Previous reading: ");
    scanf("%f",&b);

    if(a<b)
    printf("\n\33[31m\33[1mPlease Check!!! Previous reading is more than present reading.\33[0m\n");
    else
    con_unit=a-b;
    if(con_unit>unit)
    printf("\n\33[31m\33[1mPlease Check!!! Your reading is more than total unit.\33[0m\n");

    }while((a<b)||(con_unit>unit));

    printf("\n\n\33[1m\33[32m*****RESULT*****\33[0m\n");
    printf("\n\n\33[1m\33[34mYou consumed %.2f unit.\n",con_unit);
    printf("The owner consumed %.2f unit.\n",unit-con_unit);
    rate=amount/unit;
    printf("The electricity rate is approx: Rs. %.2f per unit\n\n\33[0m",rate);
    
    printf("\33[1m\33[33mYou have to pay [%.2f unit * Rs. %.2f] approx: RS. %.2f\n",con_unit,rate,con_unit*rate);

    printf("The owner have to pay approx: RS. %.2f\33[0m",amount-(con_unit*rate));
   
   printf("\n\n\33[31m\33[1mCheck Again [y/n]: ");
   getchar();
   scanf("%c",&response);
}while(response=='Y'||response=='y');
   
   

}