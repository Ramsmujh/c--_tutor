#include<stdio.h>
int fabno(int);
int main()
{
  int i,number;
  printf("Enter the limit\n");
  scanf("%d",&number);
  for(i=1; i<number; i++){
    printf("%d\t",fabno(i));
  }
  return 0;
}
int fabno(int i)
{
  if(i==0){
    return 0;
  }
  if(i==1)
  {
    return 1;
  }
  return (fabno(i-1)+fabno(i-2));
}