#include<iostream>
using namespace std;
void divisbility_of_two_number(int n){
  //int i =;
  for (int i = 1; i<=n; i++){
         if (i%3 ==0 && i%5 ==0){
          cout<<"bro"<<endl;
      }
     else if (i%3 == 0){
          cout<<"ambikesh"<<endl;
      }
      else if( i%5==0){
          cout<<"Ramsmujh"<<endl;
      }
    
      else {
          cout<<i<<endl;
      }
  }
}
int main(){
    int n;
    cout<<"This is the number given about range"<<endl;
    cin>>n;
    divisbility_of_two_number(n);
    return 0;
}