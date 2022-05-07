#include<iostream>
#include<stringapiset.h>
using namespace std;
int main(){
    string name  = "abc";
    for(int i = 0; i<name.length(); i++){
        for(int j = i; j<=i; j++){
              for(int k = i; k<j; k++){
                  cout<<name.at(k);
              }
              cout<<endl;
        }
    }
}