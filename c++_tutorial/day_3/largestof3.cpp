//Find largest of 3 numbers
#include<iostream>

using namespace std;

int main(){

    int a,b,c;
    cout << "Enter three number " << endl;
    cin >> a >>b >> c;
    cout << "The greater number is " << (a > b ? a > c ? a : c : b >c ? b : c)<< endl;
    return 0;
}