#include <stdio.h>

//#define LENGTH 10 //(If you don't comment out this the code will not work.)
//"when you use #define variable_name <space> value ,It's works as a constant i.e., you cann't
//assign  new value to the constant..."
//#define WIDTH  5
//#define NEWLINE '\n'

int main() {
   const int  LENGTH = 10;
   const int  WIDTH = 5;
   const char NEWLINE = '\n';
   int area;  
 // LENGTH= 20; //Will Show: Assignment of READ ONLY VARIABLE ERROR 
  
   area = LENGTH * WIDTH;
   printf("value of area : %d", area);
   printf("%c", NEWLINE);
  // LENGTH= 100;
   area = LENGTH * WIDTH;
   printf("value of new area : %d", area);
   return 0;
}
