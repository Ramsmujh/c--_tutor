#include<iostream>
using namespace std;
template <class T>
class OverLoding{
    public:
    T data;
    OverLoding(T a){
        data = a;
    }
};
int main(){
    OverLoding<int> datas(8);
    cout<<datas.data<<endl;
    OverLoding <float> Data(.2356);
    cout<<Data.data;
    return 0;
}