#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string name="RAR";
    string p = name;
    reverse(p.begin(),p.end());
    if(name == p){
        cout<<" this is palidrom"<<endl;

    }else{
        cout<<"this is not palidrom";
    }
}