//Print all primes till N

#include<iostream>

using namespace std;

bool isPrimeNumber(int number){

    for(int i =2 ; i< number ;i++){
        if(number%i ==0){
            return false;
        }
    }
    
    return true;
}

int main(){
    cout<< "Enter any number"<< endl;
    int n;
    cin >> n;
    for(int i = 2;i< n; i++){
        if(isPrimeNumber(i)) cout<< i << endl;
    }
    return 0;
}