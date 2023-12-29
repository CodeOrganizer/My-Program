#include<stdio.h>
#include<stdlib.h>


int main(){
   /* char *reg,a,b;
    int length,i=1;
        do{
        printf("Employee %d:\n",i);
        printf("Enter the length of your id:\n");
        scanf("%d",&length);
        reg=(char*) malloc((length+1)*sizeof(int));
        printf("Enter the value of a:\n");
        getchar();
        scanf("%c",&a);
        printf("Enter the value of b:\n");
        getchar();
        scanf("%c",&b);
        printf("Enter your employee id:\n");
        scanf("%s",reg);
        printf("Your employee id: %c%c%s\n",a,b,reg);
        i++;
        }while(i<4);
        free(reg);*/

    
    char **reg;
    int length;
    reg=(char**) malloc(3* sizeof(char*));
    
    for(int i=0;i<3;i++){
        printf("Employee %d:\n", i+1);
        printf("Enter the length of your id:\n");
        scanf("%d", &length);
        reg [i]= (char*) malloc((length + 1) * sizeof(char));
        if (reg[i] == NULL) {
            printf("Memory allocation failed. Exiting...\n");
            return 1; // Exit the program with an error code
        }
        printf("Enter your employee id:\n");
        scanf("%s", &reg[i]);
    }

    for(int i=0;i<3;i++){
        printf("Employee %d: %s",i+1,reg[i]);
    }

    for(int i=0;i<3;i++){
        free(reg[i]);
    }
    free(reg);

    return 0; // Exit the program successfully
    
    
}