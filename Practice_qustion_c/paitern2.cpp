#include<iostream>
using namespace std;
int main(){
    int count = 0;
    for(int i = 5; i>=1; i--){
        count = 5;
        for(int j = 1; j<=i; j++ ){
            cout<<count;
            count--;
        }
        cout<<endl;
    }
}