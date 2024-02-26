#include<stdio.h>
int main(){
float unit,amount,a,b,con_unit,rate;
char response;
do{
    printf("\n*****Enter Electric Bill Data*****\n");
    do{
    printf("\nTotal electric bill: Rs. ");
    scanf("%f",&amount);
    printf("Total unit: ");
    scanf("%f",&unit);
    if(amount<unit)
    printf("\nPlease Check!!! Bill Amount is less than total unit.\n");
    }while(amount<unit);

    printf("\n\n*****Enter Your Meter Reading*****\n");
    do{
    printf("\nPresent reading: ");
    scanf("%f",&a);
    printf("Previous reading: ");
    scanf("%f",&b);

    if(a<b)
    printf("\nPlease Check!!! Previous reading is more than present reading.\n");
    else
    con_unit=a-b;
    if(con_unit>unit)
    printf("\nPlease Check!!! Your reading is more than total unit.\n");

    }while((a<b)||(con_unit>unit));

    printf("\n\n*****RESULT*****\n");
    printf("\n\nYou consumed %.2f unit.\n",con_unit);
    printf("The owner consumed %.2f unit.\n",unit-con_unit);
    rate=amount/unit;
    printf("The electricity rate is approx: Rs. %.2f per unit\n\n",rate);
    
    printf("You have to pay [%.2f unit * Rs. %.2f] approx: RS. %.2f\n",con_unit,rate,con_unit*rate);

    printf("The owner have to pay approx: RS. %.2f",amount-(con_unit*rate));
   
   printf("\n\nCheck Again [y/n]: ");
   getchar();
   scanf("%c",&response);
}while(response=='Y'||response=='y');
   


}