#include<iostream>
using namespace std;
int main(){
    int count = 5;
    for(int i = 5; i>=1; i--){
        count = 5;
        for(int j=i; j>=1; j--){
            cout<<count;
            count--;
        }
        cout<<endl;
        
    }
}