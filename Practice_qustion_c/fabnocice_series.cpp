#include<iostream>
using namespace std;
int main(){
    int n, sum = 0, first = 0, second = 1;
    cin>>n;
    cout<<first<<endl;
    cout<<second<<endl;
    for(int i = 0; i<=n; i++){
        sum = first + second;
        first = second ;
        second = sum;
        cout<<sum<<endl;
    }
    return 0;
}