#include<iostream>
using namespace std;
 
 class Shop{
    int id;
    float Price;
    public:
    void setData(int a, float b){
        id = a;
        Price = b;
    }
    void printData(){
        cout<<" This is the Id "<<id<<endl;
        cout<<"This is the Price "<<Price<<endl;
    }
 };
int main(){
    int size = 2;//That is the initize the size of member:
    //int* ptr = &size;
    Shop *ptr = new Shop [size];
    //That is the shop is 2
    // online_shopping_iteam
    // offline_shopping_iteam
    int p, q;
    for (int i = 0; i < size; i++)
    {
         cout<< "enter the id is "<<i+1<<endl;
         cin>>p;
         cout<< "Enter the Price "<<i+1<<endl;
         cin>>q;
          ptr->setData(p,q);
          ptr->printData();
    }
    

    return 0;

}