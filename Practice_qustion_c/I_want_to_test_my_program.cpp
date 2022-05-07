#include<iostream>
using namespace std;
int main(){
    int count = 0;
    for(int i = 0; i<5; i++){
        //count = 1;
        for(int j= 0; j<i; j++){
            cout<<i;
           // count++;
        }
        cout<<endl;
    }
    return 0;
}