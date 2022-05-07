#include<iostream>
using namespace std;
int main(){
    int i = 0 ;
       int count = 1;
    for(i = 0; i<5; i++){
        
        for(int j = 0; j<i; j++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    return 0;
}