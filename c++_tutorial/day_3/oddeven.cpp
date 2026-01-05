#include<iostream>
using namespace std;
//Check if number is even or odd
int main (){
    int a;
    cout << "Check number is even or odd " << endl;
    cin >> a;
    cout << "Number is "<< (a%2 == 0 ? " Even ": "Odd") << endl;
    return 0;
}