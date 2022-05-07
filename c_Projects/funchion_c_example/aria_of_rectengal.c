#include<stdio.h>

int main()
{
  void area_of_rect();// local decreration which is declare in the main funchion that is local declaration
  area_of_rect();
  area_of_rect();
  area_of_rect();
  area_of_rect();
  area_of_rect();
  return 0;
}
void area_of_rect()
{
  int lenth, breadth,aria;
  printf("Enter the lenth\n");
  scanf("%d",&lenth);
  printf("Enter the breadth\n");
  scanf("%d",&breadth);
  aria=lenth*breadth;
  printf("Aria_of_rect:%d\n",aria);
}