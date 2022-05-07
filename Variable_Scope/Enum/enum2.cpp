#include<iostream>
using namespace std;
enum mobile{
    BatteryCapacity = 1, CameraQuality = 2, LargeStore = 4
};
int main(){
    int feacher = CameraQuality | LargeStore;
    cout<<feacher;
    return 0;
}