#include<stdio.h>
#include<string.h>
int main(){
    char s[20];
    printf("enter the string");
    gets(s);
    strrev(s);
   printf("This is your reverce string =%s",s);
    return  0;
}