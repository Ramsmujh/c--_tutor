//strlen();<<<< In this funchion find the srting of lenth that is determine the spacpic contract
#include<stdio.h>
#include<string.h>
int main (){
    char Name[100];
    char address[100];
    unsigned int len,len2;
    printf("Enter The your Name:-");
    gets(Name);
    printf("Enter the your address");
    gets(address);
    len=strlen(Name);
    len2=strlen(address);
    printf("HII %s Welcome\n lenth of string%d\n",Name,len);
    printf("That is your address%s\n lenth of string%d",address,len2);
    return 0;
}
