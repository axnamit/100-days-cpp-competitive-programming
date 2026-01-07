//Factorial of a number

#include<iostream>

using namespace std;

int main(){

    int n =5;
    int fact  = n;
    while(n >1){
        fact = fact * (n - 1); 
        n--;
    }
    cout << "factorial " << fact << endl;
    return 0;
}