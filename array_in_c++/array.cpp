#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[n];
    int friquancy, count = 0;
    cout<<"Enter the fracwancy number of which is given"<<endl;
    cin>>friquancy;
    cout<<"enter the size of array";
    cin>>n;
    for(int i = 0;i<=n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<=n; i++){
        if(friquancy ==arr[i]){
            count++;
        }
    }
    cout<<"the countable of fraquncy"<<count;
    
}