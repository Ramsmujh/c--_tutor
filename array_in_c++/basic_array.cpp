//an array is  a collaction of similar type stored in countigues memori location
//Sometimes, a simple variable is not enough to hold all the data.
//for example, lets say we want to store the marks of 2500 students, having 2500 diffrent variable for this task is not feasible
//to solve this problem , we can define an array  with 2500 that can hold the marks of all student
#include<iostream>
using namespace std;

int main(){
    int mark[4] = {10,20,40,33};
    for(int i=0; i<4; i++){
        cout<<"The value of the marks"<<i<<"\tis\t"<<mark[i]<<endl;
    }
    return 0;
}