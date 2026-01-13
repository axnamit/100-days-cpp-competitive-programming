//Recursive factorial

#include<iostream>

using namespace std;

int fact( int n){
    if(n > 1){
    return n * fact(n-1);

    }else{
        return n;
    }
}

int main(){
    cout << "Enter a number"<< endl;
    int a;
    cin >> a;
    cout << "Factorail of "<< a << " is " << fact(a);

    return 0;
}