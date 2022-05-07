#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the element size which you want to print"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array size";
    for(int x; x<=n; x++){
        cin>>arr[x];
    }
    int brr[] = {};
    int size = sizeof(arr)/sizeof(arr[0]);
    // squre of element:
  
    for(int i=0; i<=size; i++){
        brr[i] = arr[i] * arr[i];
    }
    // we find the brr lenth()
    int lenth = sizeof(brr)/sizeof(brr[0]);
    for(int i = 0; i<=lenth; i++){
        cout<<brr[i]<<endl;
    }

}