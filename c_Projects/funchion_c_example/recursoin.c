#include<stdio.h>
int fact(int);
int main()
{
  int n, res;
  printf("enter the value of n\n");
  scanf("%d",&n);
  res=fact(n);
  printf("Factorial is here %d\n",res);
  return 0;
}
int fact(int input)
{
  int fact1;
  if(input==0)
  {
    fact1=1;
  }
  else
  {
    fact1=input*fact(input-1);
  }
  return fact1;
}