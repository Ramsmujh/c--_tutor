#include<iostream>
using namespace std;
class Complex{
    int real , imaginary;
    public:
    void getData(){
        cout<< "That is real part of data"<<real<<endl;
        cout<<"This si the imaginari part of the data "<<imaginary<<endl;
     }
     void setData(int a, int b){
         real = a;
         imaginary =b;
     }
};
int main(){
    Complex c1;
   // Complex *ptr = &c1;
   Complex *ptr = new Complex;

  //  (*ptr).setData(33,44);
    ptr->setData(33,44);//That is the arrow aparate that is the use of arrow oprater
  //  (*ptr).getData();
    ptr->getData();

    //..array of object..//
    Complex *ptr1 = new Complex[4];
    ptr1->setData(88,33);
    ptr1->getData();
    return 0;
}