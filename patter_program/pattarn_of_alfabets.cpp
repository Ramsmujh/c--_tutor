#include<iostream>
using namespace std;
int main(){
    int i,j;
    char k; 
    for(i = 1; i<=4; i++){
        k='A';
        for(j=1;j<=7;j++){
            if(j<=5-i || j>=3+i){
                cout<<k;
                if(j<4){
                    k++;
                }else{
                    k--;
                }
            }else{
                cout<<" ";
                // when the value of the discrement then the value is given is stoped
               if(j==4){
                k--;
               }
            }
        }
        cout<<endl;
    }
    return 0;
}