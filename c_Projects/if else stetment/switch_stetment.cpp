#include<iostream>

using namespace std;

int main()
{
  int age;
  cout<<"printf the your actual age" <<endl;
  cin>>age;
  switch (age)
  {
  case 10:
        cout<<"your are the 10 year old"<<endl;
        break;
  case 22:
       cout<<"you are the 22 year old"<<endl;
       break;
   case 55:
      cout<<"your are the 25year old"<<endl;
      break;
  case 30:
      cout<<"you are the 30year old"<<endl;
      break;
  default:
  cout<<"your condition don't match"<<endl;
    break;
  }
  cout<<"your program is terminated"<<endl;
  return 0;
}