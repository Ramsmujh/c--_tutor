#include<stdio.h>
void add();
void iseven();
int main()
{
  add();
  iseven();
  add();
  add();
  add();
  iseven();
  return 0;
}
void add()
{
  int a,b,c;
  printf("Enter the number\n");
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("sum is:%d\n",c);
  printf("\n");
}
 void iseven()
{
  int a;
  printf("Enter the value of A\n");
  scanf("%d",&a);
  if(a/2==0||a%2==0)
  {
    printf("This is The even number\n");
  }
  else
  {
    printf("This is The odd number\n");
  }
}