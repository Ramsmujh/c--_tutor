#include<stdio.h>
#include<string.h>
struct emp
{
   char E_name[20]; 
   int E_Number;///4byte memory consumed
   float E_salary;///4byte memory location
};
int main(){
    struct emp Employ;
    strcpy(Employ.E_name ,"ramsmujh");
    printf("This is the employ Name:- %s\n",Employ.E_name);
    printf("Size of stucture:-  %d",sizeof(struct emp));
    return 0;

}

