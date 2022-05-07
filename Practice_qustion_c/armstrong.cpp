#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int Arm_number, sum = 0, rem =0;
    int nn ;
    cin>>nn;
    Arm_number = nn;
    while(Arm_number!= 0){
          rem = Arm_number %10;
          sum =pow(rem,3)+sum;
          Arm_number /= 10;
    }
    if(nn == sum){
        cout<<"This is armstrong nuber";
    }else{
        cout<<"maa chudaao apni";
    }
    return 0;
}