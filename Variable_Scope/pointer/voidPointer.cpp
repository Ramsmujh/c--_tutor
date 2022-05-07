#include<iostream>
using namespace std;
int main(){
    // void pointer that has no associat data type with it. A void pointer can hold
    // addresh of any type and can be typecast to any type 
    void *p = NULL;
     cout<<sizeof(p)<<endl;
     return 0;
}