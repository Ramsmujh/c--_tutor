#include<stdio.h>
#include<string.h>
struct emp
{
   char E_name[20]; 
   int E_Number;
   float E_salary;
};
int main(){
    struct emp Employ;
    strcpy(Employ.E_name ,"ramsmujh");
    printf("This is the employ Name:- %s\n",Employ.E_name);
    printf("Size of stucture:-  %d",sizeof(Employ));
    return 0;

}
