#include<stdio.h>
#include<string.h>

struct student
{
  char student_name[20];
   int student_id;
   int student_roll_number;
  char student_Branch[100];
  char student_collage_Name[100];
  float student_Mark;  
};
int main(){
   struct student s1;
  strcpy(s1.student_name, "Ramsmujh");
  s1.student_id=12345;
  strcpy(s1.student_collage_Name,"Rameshwarm institute of technolgy Managment");
  strcpy( s1.student_Branch, "Computer science");
  s1.student_roll_number=1735810019;
  s1.student_Mark=67.87;
   printf("student_Name:-%s\n",s1.student_name);
   printf("student_collage_Name:-%s\n",s1.student_collage_Name);
   printf("student_branch:-%s\n",s1.student_Branch);
   printf("student_id:-%d\n",s1.student_id);
    printf("student_roll_number:-%d\n",s1.student_roll_number);
   printf("student_Mark:-%f\n",s1.student_Mark); 
  return 0;
    
}
