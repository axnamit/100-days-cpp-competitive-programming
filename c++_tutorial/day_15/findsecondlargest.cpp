#include<iostream>

//Find second largest element

using namespace std;

void bubblesort(int arr[], int size){
    //4,23,5,3,6,5,7
    for(int i = 0;i< size;i++){//i=0
        for(int j =0; j < size-i-1; j++){//j=1 4,4,23
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){

    int arr[] = {4,23,5,3,6,5,7};
    //3,4,5,,5,6,7,23
    int size = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,size );
    cout<<"size of array"<<size<< "Second larget number "<< arr[size-2];

    return 0;
}