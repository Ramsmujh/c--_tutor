#include<iostream>
using namespace std;
int main(){
    int Palidrom_number, rem = 0, sum = 0;
    cin>>Palidrom_number;
    int sc = Palidrom_number;
    while(sc!=0){
        rem = sc %10;
        sum = (sum*10)+rem;
        sc  /=10;
    }
    if(Palidrom_number = sum){
        cout<<sum<<" this is the palidrom number"<<endl;
    }else{
        printf("this is not palidrom number %d:",sum);
    }
}