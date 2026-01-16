#include<iostream> 

using namespace std;

void reverseNumber(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while(start < end ){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    //print array
    for(int i =0; i< size ; i++){
        cout << arr[i] << " " ;
    }
    

}

int main(){

    int arr[] = {34,3,45,21,37,33,99,34,23,11,3};

    reverseNumber(arr, sizeof(arr)/sizeof(arr[0]));

    
    return 0;
}