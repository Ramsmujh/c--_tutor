#include<stdio.h>
int add(int a,int b)
{
    int c=a+b;
    return c;
}
int multiplie(int a,int b,int c)
{
    int d=a*b*c;
    return d;
}
int main(){
   int adds,mul;
   adds=add(30,40);
   mul=multiplie(20,30,10);
   printf("add the value:-%d\n mulultification is:- %d\n",adds,mul); 
    return(0);
}