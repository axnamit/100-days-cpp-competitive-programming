#include<iostream>
//Print multiplication table of a number
using namespace std;

int main(){
    int a;
    cout << "Hey what number of table you type : "<< endl;
    cin >> a;
    int i = 1;
    while(i < 11){
        cout << a <<  " * " << i << " = " << a * i << endl;
        i++;
    }

    return 0;

}