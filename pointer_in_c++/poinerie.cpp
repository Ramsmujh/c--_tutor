#include<iostream>
using namespace std;
int main(){
    //Basic Example
    int a = 4;
    int* ptr = &a;
    cout<<"The value of a is "<<*(ptr)<<endl;//addresh of a is hold the ptr varibal throw the pointer
    cout<<"The Addresh of a is "<<ptr<<endl;
    //cout<<"The Addresh of a is "<<a<<endl;
    //cout<<"The Addresh of a is "<<&a<<endl;
    // new keybors
    int *p = new int(8);
  //  int *s = new float(43.44);
  cout<< " the value at address p is "<<*p<<endl;
  int *arr = new int[3];
  arr[0] = 10;
  *(arr+1) = 39;
  arr[2] = 22;
 // delete[] arr;// that is the delete arr
  cout << " The value of arr[0] is "<<arr[0]<<endl;
  cout << " The value of arr[1] is "<<arr[1]<<endl;
  cout << " The value of arr[2] is "<<arr[2]<<endl;
    return 0;
}