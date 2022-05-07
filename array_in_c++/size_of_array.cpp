#include<iostream>
using namespace std;
int main(){
    int pincode[] = {123,000,345,342,678};
  //  int number[5];
    int d = sizeof(pincode)/sizeof(pincode[0]);
    cout<<sizeof(pincode)<<endl;
    cout<<d;
    // for(int i = 0; i<d; i++){
    //     cout<<pincode[i]<<endl;
    // }
    return 0;
}