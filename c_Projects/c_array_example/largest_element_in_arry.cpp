#include<stdio.h>

int main()
{
  int arr[5], i, n, large;
  printf("Enter the value of arry:\n");
  for(i=0; i<5; i++)
  {
    scanf("%d",&arr[i]);
  }
  large=arr[0];
  for(i=0; i<5; i++)
  {
    if(arr[i]>large)
    {
      large=arr[i];
    }
  }
  printf("large:%d\n",large);
  return 0;
}