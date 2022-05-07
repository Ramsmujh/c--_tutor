#include<stdio.h>
void swap(int*,int*);
void main(){
    int a=10;
    int b=20;
    printf("before the swaping\t%d \t%d\n",a,b);
    swap(&a,&b);
    printf("after the swap\ta%d \tb%d",&a,&b);
}
void swap(int *x,int *y){
    int temp=*x;
        *x=*y;
        *y=temp;
        printf("after the swap\t%d \t%d",*x,*y);
}