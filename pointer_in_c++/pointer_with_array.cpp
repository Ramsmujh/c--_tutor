#include<iostream>
using namespace std;
class Shop{
    int Id;
    float Price;
    public:
    void setData(int a, float b){
        Id = a;
        Price = b;
    }
    void getPrint(){

        cout<<"This is the Id "<<Id<<endl;
        cout<<"This is the Price "<<Price<<endl;
    }
};
int main(){
    int ID;
    float Price;
    int size,i;
    cout<<"Enter the Shop size"<<endl;
    cin>>size;
    Shop* ptr = new Shop[size];
    Shop* prtTemp = ptr ;
    for (  i = 0; i < size; i++)
    {
       cout<<"Enter the Id and Price" <<i+1<<endl;
       cin>>ID>>Price;
       ptr->setData(ID,Price);
       ptr++;
    }
    //****** This for loop is the use the printf the addresh***//
    for( i =0; i <= size; i++){
        cout<<"count the item Number "<<i+1<<endl;
        prtTemp->getPrint();
        prtTemp++;

    }
    return 0;
}