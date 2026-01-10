#include<iostream>
using namespace std;

int reverse(int n);
int main(){
    //
    int n;
    cout << "enter a number "<<endl;
    cin >> n;
    cout << "reversed "<< reverse(n)<<endl;
    return 0;
}

int reverse(int n){
    int rev = 0;

    while(n > 0){
        int rem = n%10;
        rev = (rev * 10) + rem;
        n= n/10;
    }
return rev;
}