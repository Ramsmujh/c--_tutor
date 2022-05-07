#include<iostream>
using namespace std;
void Prime_number(int n){
int i,flag = 0;
for(i = 0; i<=n/2;i++){
    if(n%i ==0){
      cout<<"this is not Prime"<<endl;
      flag = 1;
      break;
    }
}
 if(flag==0){
     cout<<"prime"<<endl;
 }
}

int main(){
    int number;
    cin>>number;
    Prime_number(number);
    return 0;
}