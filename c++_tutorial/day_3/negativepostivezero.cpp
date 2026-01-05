#include<iostream>
using namespace std;
//Check if number is positive, negative, or zero
int main (){
    int a;
    cout << "Enter a Number" << endl;
    cin >> a;
    if(a >= 1){
        cout << a << " Is Positive number "<< endl;
    }else if(a <= -1){
        cout << a << " Is Negative number "<< endl;
    }else{
        cout << a << " is a zero "<< endl;
    }
    return 0;
}