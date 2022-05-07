#include <iostream>

using namespace std;0
int main()
{
  int age;
  cout<<"tell me tour age";
  cin>>age;
  if(age<18 && age>0)
  {
    cout<<"you can not eligibal my party";
  }
  else if(age==18)
  {
    cout<<"you are a kids and you will get the part of party";
  }
  else if(age<1)
  {
    cout<<"you are not a born";
  }
  else
  {
    cout<<"welcome to you may party";
  }
  return 0;
}