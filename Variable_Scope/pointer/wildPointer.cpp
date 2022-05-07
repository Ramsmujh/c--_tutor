#include<iostream>
using namespace std;
int main(){
    int a = 334;
    int *ptr;//this is wild pointer is noting the element is theere is we not declare it's might be crash the memory allocation
    *ptr = 34;
    cout<<*ptr;
    return 0;

}