#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    for(int i = 0; i<size; i++){
        for(int j = i-1; j<=size; j++){
            if(arr[i]<arr[j]){
                 int temp = arr[i];
                  arr[i] =arr[j];
                   arr[j] = temp; 
                
            }
        }
    }
}

int main(){
int arr[] = {3,5,6,7,9,44,32};
int size  = sizeof(arr)/sizeof(arr[0]);
bubbleSort(arr,size);
cout<<size<<endl;
for(int i = 0; i<=size; i++){
    cout<<arr[i]<<endl;
}
}