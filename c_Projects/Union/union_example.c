#include<stdio.h>
/**
 * This is mean the unio works same as it is the structure but , when we talk about its memory
 * allocation it take several memory space according to the variables like int fload, char and many more
 * it works like a
 * */3
 
union student
{
   int student_roll_number;
   char name[50];
   float mark; 
};
int main(){
   union student s1= {12343,"ramsmujh",67.78};
   printf("this is the student details");
   printf("Student_Roll_Number:- %d\n",s1.student_roll_number);
   printf("This is the student Name:- %s \n",s1.name);
   printf("This is the student mark:- %f",s1.mark);
   return 0;
}
