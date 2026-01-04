#include<iostream>
using namespace std;

int main(){

    int a, b;
    cout << "Enter two number " << endl;

    cout << "Enter number for a :";
    cin >>  a;

    cout << "Enter number for b :";
    cin >>  b;

    a = b + a;
    b = a - b;
    a = a - b;

    cout << " Number swapped a & b is " << a <<" " << b ;

    return 0;
}