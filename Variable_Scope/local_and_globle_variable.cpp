#include<iostream>
int global=20;
using namespace std;
void sum(){
    int global=30;
}
 int main(){
    int global=238;//local variable is the first peority to acces the variable and then printf the globle variable;
    cout<<"This is the local variable two gloove the precidence to first print"<<global<<endl; sum();cout<<global<<endl;
    return 0;
 }

