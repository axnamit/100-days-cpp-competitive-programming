#include<iostream>

using namespace std;

//not optimised one 
void bubbleSort(int arr[], int n){

    //[2,6,1,3,4,99,43,22]
    //[]

    for(int i =0; i< n-1; i++){
        for (int j = 0; j < n - i - 1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int findmax(int arr[], int n){
    // sort array 
    bubbleSort(arr, n);
    return arr[n-1];
}

int main (){

    int arr[] = {2,6,1,3,4,99,43,22};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = findmax(arr,size);
    cout << "max"<< max<< endl;
    return 0;
}