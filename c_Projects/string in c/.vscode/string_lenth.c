// This program is the without using the string library in 
// find the lenth of character;
//in this program i'm using the funchion:-
#include<stdio.h>
int stringLenth(char name[100]);
int main(){
    char Name[100];
    int len;
    printf("Enter the your name");
    gets(Name);
    len=stringLenth(Name);
    printf("Hii %s welcome to My console\n lennth of srting %d",Name,len);
    return 0;
}
int stringLenth(char x[100])
{
int i,count=0;
for(i=0; x[i]!='\0'; i++){
    count++;
}
return count;
}
