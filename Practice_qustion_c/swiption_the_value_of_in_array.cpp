#include<iostream>
using namespace std;
int count = 0;
class ArraySwaping{
    public:
    void insert(int a[],int value){
        a[count++] = value;
    }
    void print(int a[],int len){
       for(int j = 0; j<len; j++){
           cout<<a[j]<<endl;
       }
    }

};
int main(){
  ArraySwaping  o = ArraySwaping();
  int a[5] ;
  int len = sizeof(a)/sizeof(a[0]);
  cout<<len;
  // enter the value of the array
  for(int i = 0; i<len; i++){
      cin>>a[i]; 
  }
  for(int i =  0; i<len; i++){
      o.insert(a,i+1);
  }
  o.print(a,len);


}