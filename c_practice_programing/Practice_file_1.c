#include<stdio.h>
 int main()
 {
     int num;
     //Take the number as an input from the user
     printf("Enter the any number which can you choose\n");
     scanf("%d",num);
     for (int i = 1; i<=10; i++){
         printf("%d X %d = %d\n",num,i,i*num);
     }
     return 0;
 }