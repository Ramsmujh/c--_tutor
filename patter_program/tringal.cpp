#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number which line You have print";
    cin>>n;
    for(int i = n; i>0; i--){
        for(int j = 0; j<i; j++){
            cout<<"*";
            cout<<"\t";
        }
        cout<<endl;
    }
}