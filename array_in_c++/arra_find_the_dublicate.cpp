#include<iostream>
using namespace std;
char s = 'ram';
int main(){
    for(int i= 0; i<=7; i++){
        if(i == 3){
            continue;
        }
        if(i==5){
            break;
            s = s+i;
        }
    }
    cout<<s;
    return 0;
}