#include<stdio.h>

int main()
{
  int arr[20],size,i,index,value;
  printf("Enter the size of arry:\n");
  scanf("%d",&size);
  printf("enter the element in arry\n");
  for(i=0; i<size; i++)
  {
    scanf("%d",&arr[i]);
    printf("before the insertion:%d\n",arr[i]);
  }
  printf("Enter the inser value:\n");
  scanf("%d",&value);
  printf("Enter the index\n");
  scanf("%d",&index);
  for(i=size-1; i>=index; i--)
  {
    arr[i+1]=arr[i];
  }
  arr[index]=value;
  size++;
  for(i=0; i<size; i++)
  {
    printf("After the insertion:%d\n",arr[i]);
  }
  return 0;
}