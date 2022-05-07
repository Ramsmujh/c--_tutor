#include<stdio.h>
struct Emp{
    int E_number;
    char name[20];
    float salary;
};
int main(){
    char* cp;
    long int*  ip;
    struct Emp *s1;
    printf("Size of char is :- %d\n",sizeof(cp));
    printf("Size of integer is :- %d\n",sizeof(ip));
    printf("size of Emp is :- %d\n",sizeof(s1));
    return 0;


}