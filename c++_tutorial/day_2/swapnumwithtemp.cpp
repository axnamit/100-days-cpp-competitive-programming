#include<iostream>
using namespace std;
//Swap two numbers (using temp variable)
int main(){
    int a,b,temp;

    cout << "Enter two number " << endl;

    cout << "Enter number for a :";
    cin >>  a;

    cout << "Enter number for b :";
    cin >>  b;

    temp = a;

    a = b;
    b = temp;

    cout << " Number swapped a & b is " << a <<" " << b ;
    
    return 0;
}