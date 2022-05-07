#include<stdio.h>
#include<string.h>

void reverce_string(char * str){
    
    int lenth,i;
    char *begain_ptr,*End_ptr,ch;
    lenth=strlen(str);
    begain_ptr = str;
    End_ptr = str;
    for(i = 0; i<lenth - 1; i++){
        End_ptr++;
    }
    for (i = 0; i<lenth/2; i++){
        ch = *End_ptr;
        *End_ptr = *begain_ptr;
        *begain_ptr = ch;
        begain_ptr++;
        End_ptr--;
    }
  
    
}


int main(){
    char *str;
    printf("Enter the string \n");
    scanf("%c",&str);
    
   printf("%c",(str));
    return 0;

}