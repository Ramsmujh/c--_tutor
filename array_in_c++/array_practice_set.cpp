#include<iostream>
using namespace std;
int main(){
    int i =1;
    if(i++&&(i==1)){
        cout<<true<<"h";
    }else{
        cout<<false<<"no";
        cout<<i;
        i++;
    }
return 0;
}