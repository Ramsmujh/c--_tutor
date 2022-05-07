#include<stdio.h>
void add(int a,int b);
void sub(int x , int y);
void div(int ,int );
void modular(int ,int);
int main()
{ 
  int x, y;
  printf("Enter the number");
  scanf("%d%d",&x,&y);
  add(x,y);//actual argument or actual parameter
  sub(x,y);// That is call by value:-
  div(x,y);
  modular(x,y);
  return 0;
  // if the value is only difine the 
  //only one type variable is call only at a one time:
}
void add(int a, int b)//formal argument is the or formal parmeter
{
  int c;
  c=a+b;
  printf(" SUM IS:%d\n",c);
}
void sub(int x, int y)
{
  int z;
  z=x-y;
  printf(" subtraction is%d\n",z);

}
void div(int d, int o)
{
  int z;
  z=d*o;
  printf(" multipli is%d\n",z);
}
void modular(int e, int f)
{
  int z;
  z=e/f;
  printf("divid is%d\n",z);
}