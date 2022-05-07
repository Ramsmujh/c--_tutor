#include <iostream>  
using namespace std;  
int main()  
{
  int s=3;
  int* p;
  p=&s;
  cout<<"address of numbr variable"<<&s<<endl;
  cout<<"address of p value is:"<<*p<<endl;
  cout<<"address of p is:"<<&p<<endl;
  return 0;

} 