//Recursive factorial

#include<iostream>

using namespace std;

int factorial(int n){

    int fact = 1;//1 * 5 = 5* 4 =20 * 3 = 60 * 2 = 120 * 1 = 120 
    while( n >=1 ){
        fact = fact * n;
        n--;
    }
    return fact;
}

int main(){

    int a;
    cout << "Enter a number "<< endl;
    cin >> a;
    int n = factorial(a);
    cout << "Factorail number "<< n << endl;

    return 0;
}