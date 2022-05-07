#include<iostream>
using namespace std;
int main(){
    int coutn = 1;
    for(int i = 1; i<=5; i++){
        // coutn = 1;
        for(int j= 1; j<=i; j++){
            cout<<coutn;
            coutn++;
            
        }
        cout<<endl;
    }
}