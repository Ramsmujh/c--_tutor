#include<stdio.h>
struct Emp{
    int E_number;
    char E_Name[20];
    float E_Salary;
};
int main(){
    struct Emp s1={34,"Ramsmujh" ,1000};
    printf("Emp Details :-\n");
    printf("employ no:- %d\n",s1.E_number);
    printf("Employ Name :- %s\n",s1.E_Name);
    printf("Employ salary:- %f\n",s1.E_Salary);
    printf("This is all about information that is procide");
    return 0;
}