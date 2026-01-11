//Pass by value vs reference
#include<iostream>

using namespace std;
void passbyvalue(int n){
    n = 30;
    cout << "Value of n after pass by value "<< n<<endl;

}

void passbyreference( int &n){
    n = 40;
    cout << "Value of n after pass by value "<< n<<endl;

}

int main(){
    int x = 10;
    passbyvalue(x);
    cout << "Value of x after pass by value "<< x<<endl;
    passbyreference(x);
    cout << "Value of x after pass by value "<< x<<endl;


}