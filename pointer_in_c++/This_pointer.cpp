#include<iostream>
using namespace std;

class A {
    int a;
    public:
    void setData(int a){
       this->a=a;
    }
    void getData(){
        cout<<"This is the value of a "<<a<<endl;
    }
};
int main(){
    //this is a keybord which is a pointer to the object which invokes the member funchion
    A a;
    a.setData(4);
    a.getData();
    return 0;
}
