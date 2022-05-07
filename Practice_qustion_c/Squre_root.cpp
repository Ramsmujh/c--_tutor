#include<iostream>
#include<math.h>
using namespace std;
bool IsPerfect_squre(int n){
    int squre = sqrt(n);
    if(squre * squre == n){
        return true;
    }else{
        return false;
    }
}
int main(){
    int n;
    cout<<"Enter the number of the squre"<<endl;
    cin>>n;
    bool perfect = true;
    perfect = IsPerfect_squre(n);
    if(perfect == true){
    cout<<"The number is"<<n<<"perfect squre is"<<sqrt(n)<<endl;
    }else{
    cout<<"The number is"<<n<<" Not perfect squre is"<<endl;
    }

}