#include<stdio.h>

int main()
{
  int arr[100],n,i,large,sec_large;
  printf("Enter the size of arry:\n");
   scanf("%d",&n);
  for(i=0; i<n; i++)
  {
    scanf("%d",&arr[i]);
  }
  large=arr[0];
  sec_large=arr[1];
  for(i=0; i<n; i++)
  {
    if(large<arr[i])
    {
     
      sec_large=large;
       large=arr[i];
    }
    else if(sec_large>arr[i] && arr[i]!=large)
    {
      sec_large=arr[i];
    }
  }
  printf("large=%d \nsec_large=%d",large,sec_large);
  return 0;
}