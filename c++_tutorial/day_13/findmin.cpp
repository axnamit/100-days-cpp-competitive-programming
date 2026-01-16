#include<iostream>

using namespace std;

void bubblesort(int arr[], int n){

    for(int i = 0 ; i < n ; i++){
        for(int j =0 ; j < n - i - 1; j++){
            if(arr[j]> arr[j+1]){
                arr[j] = arr[j]+ arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
    }
    cout << "sorted array is " ;
        for(int i = 0 ; i < n ; i++){
            cout << arr[i] << " ";
        }

}

int main(){

    int arr[] = {44,3,23,34,223,3,23,5,3,1,3,0,43,4,3};
    int size = sizeof(arr)/sizeof(arr[0]);

    bubblesort(arr,size);
    cout << "Min element is " << arr[0] << endl;

    return 0;

}