/*********************************
 * This is the take nothing somthing reurn nothing**************************/
#include<stdio.h>

int main()
{
  void add();//Funchion declaratoin...
  add();//calling the value ..........
  return 0;
}
void add()//Function Difination.......
{
  int a=5, b=20, c;
  c=a+b;
  printf("Sum is:%d",c);
}