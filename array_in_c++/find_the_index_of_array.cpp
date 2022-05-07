#include<iostream>
using namespace std;
int FindTheIndex(int size,int number){
 int arr[size];
 int index = -1;
 for(int i= 0; i<=size; i++){
     cin>>arr[i];
 }
 for(int i= 0;i<=arr[size]; i++){
     if(number==arr[i]){
       return i;
       break;
     }
 }
 return -1;
}
int main(){
    int size,number;
    cin>>size>>number;
    cout<<FindTheIndex(size,number)<<endl;
}