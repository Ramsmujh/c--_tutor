#include<stdio.h>

int main()
{
  int arr[5]={5,8,5,7,6}, i, sum=0;
  printf("Printing the sum value of the arry\n");
  for(i=0; i<5; i++)
  {
    sum=sum+arr[i];
    printf("%d\n",sum);
  }
  printf(" sum:%d\n",sum);
  return 0;
}