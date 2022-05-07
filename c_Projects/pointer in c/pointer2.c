#include<stdio.h>
 int main(){
     int i=100;
     int* ptr;
     ptr = &i;
     printf("printf the value of the i:- %d\n",i);
     printf("printf the ptr location:- %u\n",ptr);//%u is content the positive integer
     printf("printf the addresh of i:- %u\n",&i);
     printf("addresh of the ptr of :- %u\n",&ptr);
     printf("printf the hold the variable which is printf the:- %u\n",*ptr);
     printf("printf the variable:- %u\n",*(&i));
     return 0;
 }