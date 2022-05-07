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
    int (*ptr)(int ,int);
    ptr = &add;
    int r1=ptr(30,40);
    printf("sum is:- %d,\n",r1);
    
    int (*mul)(int , int , int);
    mul=&multiplie;
    int s2=mul(2,4,5);
    printf("multification here:- %d",s2);
    return 0;

}
