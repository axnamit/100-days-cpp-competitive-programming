//Check if array is sorted

#include<iostream>
using namespace std;

bool checkIfArrayIsSorted(int arr[], int size){

    //asending array is sorted or not 
    for(int i = 0; i < size-1; i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[] = {4,5,6,7,8,9,10,44,57,85,832};

    int arr2[] = {4,2,4,7,8,2,2,0,6};
    cout << " arr is sorted or not " << checkIfArrayIsSorted(arr,sizeof(arr)/sizeof(arr[0])) << endl;
    cout << " arr2 is sorted or not " << checkIfArrayIsSorted(arr2,sizeof(arr2)/sizeof(arr2[0])) << endl;
    return 0;
}