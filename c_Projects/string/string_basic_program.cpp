#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  char c1[]="ram";
  char c2[]="smujh";
  cout<<"concatination: "<<strcat(c1,c2);
  cout<<"\n";
  cout<<"copy: "<<strcpy(c2,c1);
  cout<<"\n";
  cout<<"lenth of string: "<<strlen(c1);
  cout<<"\n";
  return 0;
}