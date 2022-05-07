#include <iostream>
#include <string>
using namespace std;

string StringChallenge(string str) {
  
  // code goes here  
  int str_code;
  for(int i = 0; i<=str.length();i++){
    str_code = int (str[i]);
    if(str_code ==112){
      str[i] = char(97);
    } else if (str_code == 90){
      str[i] = char(65);
    } else if(str_code >=65 && str_code<=90 || str_code>=97 && str_code<=122){
       str[i] = char(str_code + 1); 
      if( str[i] == 97 || str[i] == 101 || str[i] == 105 || str[i] == 112 || str[i] == 117 ){
        str[i] = ( str[i]-32 );
      }
    }
  }
  return str;

}

int main(void) { 
   
  // keep this function call here
  string str;
  cin>>str;
  cout << StringChallenge(str);
  return 0;
    
}