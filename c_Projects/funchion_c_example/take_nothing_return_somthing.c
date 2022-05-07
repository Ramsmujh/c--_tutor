#include<stdio.h>
int add();
int main()
{
  int s;
  s=add();
  printf(" sum is%d",s);
  return 0;
}
int add()
{
  int a,b;
  printf("enter the number of a,b");
  scanf("%d%d",&a,&b);
  return (a+b);
}