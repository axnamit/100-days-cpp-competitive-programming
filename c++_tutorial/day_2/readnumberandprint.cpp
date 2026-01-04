//Read integer and float, print with 2 decimals

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a;
    float b;
    cout << "Enter an integer number " << endl;
    cin >> a;
    cout << "Enter float value " << endl;
    cin >> b;
    cout << "Integer number is " << a << " Float number is  " << fixed << setprecision(2) << b << endl;
    
    return 0;
}