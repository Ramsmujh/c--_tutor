#include<iostream>
using namespace std;
int main(){
    int a[10] ={12,44,66,23,43,22,53,61,62,98};
  int Smallest;  a[0] =  Smallest;
    for(int i = 1;i<=a[10]; i++){
        if(Smallest<=a[i]){
            Smallest = a[i];
            cout<<Smallest<<endl;
        }

    }
    return 0;
}
