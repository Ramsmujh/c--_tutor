#include<stdio.h>
void swap(int,int);//funchion declaration
void main(){
    int a=10, b=20;
    printf("before the swaping\t%d \t%d\n",a,b);
    swap(10,20);
}
void swap(int x,int y)
{
    int temp;
        temp=x;
        x=y;
        y=temp;
        printf("after the swaping \t%d \t%d",x,y);
}
