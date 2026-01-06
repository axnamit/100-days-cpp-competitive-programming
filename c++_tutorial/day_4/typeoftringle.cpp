/*
a + b > c
a + c > b
b + c > a
*/

#include<iostream>
using namespace std;
int main(){

    int a,b,c;
    cout << "Enter three sides of tringle "<< endl;
    cin >> a >> b >> c;

    if(a+b > c && a+c > b && b+c > a){
        cout << "It is a valid tringle "<< endl;
    }else{
        cout << "It is not a valid tringle" << endl;
    }
    return 0;
}