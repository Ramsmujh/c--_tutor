#include <iostream>
using namespace std;
int main()
{
    int range;
    int temp = 0;
    int n;

    cout << "enter the range which which you want to check" << endl;

    cin >> range;
    cout << "enter the number which you want to check" << endl;
    cin >> n;

    for (int i = 0; i <= range; i++)
    {

        if (n % i == 0)
        {
             cout << "this is not prime number";
            temp = 1;
            break;
        }
    }
    if (temp == 0)
    {
       cout << "prime number"; 
    }
   

    return 0;
}