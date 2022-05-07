#include<stdio.h>
#include<string.h>
int main()
{
    char Name[100], temp;
    int lenth;
    printf("Enter the NAme\n");
    gets(Name);
    lenth=strlen(Name);
    for( int i=0; i<(lenth/2); i++)
    {
      temp=Name[i];
      Name[i]=Name[lenth-1-i];
      Name[lenth-1-i]=temp; 
    }
    printf("after the swapping %s",Name);
    return 0;


}
