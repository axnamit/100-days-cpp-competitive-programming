//Check prime number
//example 2,3,5,7,11,13 .etc
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

    int n ;
    cout << "Enter a number "<< endl;
    cin >> n;
    bool isprime = isPrimeNumber(n);
    if(isprime) cout<< "This is a prime number"<< endl;
    else cout << "This is not a prime number "<< endl;

    return 0;
}

