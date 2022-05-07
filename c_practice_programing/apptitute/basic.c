#include<stdio.h>
int main(){
  for(int x = -1; x<=10; x++){
      if(x<5){
          continue;
      }
      else{
          break;
          printf("%d","ABC");
      }
  }  
  return 0;
}