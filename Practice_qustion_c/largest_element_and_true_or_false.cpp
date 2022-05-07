#include<iostream>
using namespace std;
int main(){
 int arr[5];
 int n ,i,sum = 0,max;
 cout<<"Enter the element of arry"<<endl;
 cin>>n;
 cout<<"Enter the arry element"<<endl;
 for( i = 0; i<=n; i++){
     cin>>arr[i];
 }
  max = arr[0];
 for(i= 0; i<=n; i++){
     if(max<=arr[i]){
         max = arr[i];
     }

 }  
 for (i = 0; i<=n; i++){
      if(max ==arr[i]){
            continue;
        }else{
            sum = sum + arr[i];
        }
 }   
 if(max == sum){
     cout<<"True"<<endl;
 }else{
     cout<<"false"<<endl;
 }
cout<<"grethest number is"<<endl<<max<<endl<<sum;
 return 0;
  
}