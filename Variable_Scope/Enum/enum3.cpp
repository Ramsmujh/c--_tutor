#include<iostream>
using namespace std;
enum caption{avi,sid, robby, sami, jake};
int main(){
caption cap = avi;
if(cap == avi){
    cout<<"Our caption is avi it's value is"<<avi<<endl;
}else{
    cout<<"He not caption ";
}
return 0;
}