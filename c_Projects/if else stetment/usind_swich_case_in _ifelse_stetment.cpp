#include<iostream>

using namespace std;

int main()
{
  int age;
  cout<<"printf the your actual age";
  cin>>age;
  switch (age)
  {
  case 10:
        cout<<"your are the 10 year old";
        break;
 /* case 22:
       cout<<"you are the 22 year old";
       break;
   case 55:
      cout<<"your are the 25year old";
      break;
  case 30:
      cout<<"you are the 30year old";
      break;*/
  default:
  cout<<"your condition don't match";
    break;
  }
  return 0;
}