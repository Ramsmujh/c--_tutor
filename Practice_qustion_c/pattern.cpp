#include <iostream>

using namespace std;
int telefon(int n){
        return (n == 0)?1: n*telefon(n-1);
    }

int main()
{
    cout<<"Hello World";
    int n = 6;
    // int telefon(n);
    cout<<telefon(n);

    
    return 0;
}

