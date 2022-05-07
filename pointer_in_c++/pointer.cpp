#include<iostream>
using namespace std;

int main(){
    //Data type which holds the address o fo other data types
    int a=3;
    int *b=&a;
  //  int *c= &b;
    
    cout<<"the addresh of a"<<b<<endl;
    cout<<"the value of a"<<*b<<endl;
    int** c=&b;
    cout<<"The address at  B"<<&b<<endl;
    cout<<"The address at  B"<<c<<endl;
    cout<<"The value at address  c"<<*c<<endl;
    cout<<"The value at  address value_at(value_at(c)) is  c "<<**c<<endl;
   // cout<<c; 

    return 0;
}