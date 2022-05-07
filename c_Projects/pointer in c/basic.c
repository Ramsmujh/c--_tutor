#include <stdio.h>

int main () {

   int  var1=12;
   //This is the var 1 if the value assigned then printf the value of the variable
   //and the we are assing the addresh of the variable then the use & it is the hold the value of variable
   char var2[10];
   //pointer is the hold the value of variable that is callaed the pointer that means it reference of variable
   //That is the variable is hold the value then it is use of specifier is:- %x-------------------------------
   printf("Address of var1 variable: %x %d\n", &var1,var1);
   printf("Address of var2 variable: %x\n", &var2  );

   return 0;
}