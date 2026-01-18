//Count frequency of elements

#include<iostream>

using namespace std;

int countfrequency(int num[] , int size){

    bool visited[30] = {false};

    for(int i = 0; i < size ; i++){ 
        if(visited[i]){
            continue;
        }
        int count = 0;
        for ( int j = 0; j < size ; j++){
            if(num[i] == num[j]){
                count++;
                visited[j] = true;
            }
        }
        cout << " count of " << num[i] << " is " << count << endl;
    }
    return 0;
}

int main (){
    int arr[] = {3,4,5,3,4,7,3,2,4,9,4,5,2,1,3,5,6,67,43,1,1,1,1,5};
    countfrequency(arr,sizeof(arr)/sizeof(arr[0]));

    return 0;
}