//18 % 12 = 6 → gcd(12, 6)
//12 % 6  = 0 → gcd(6, 0)
//Answer = 6
//gcd euladian

#include<iostream>

using namespace std;

int gcd(int n, int n2){
    int rem = n % n2 ;
    if (rem != 0){
        return gcd(n2, rem);
    }
    return n2;
}
int main(){
    cout<< "enter number for gcd"<<endl;
    int n1,n2;
    cin>>n1 >>n2;
    cout << "the greatest common divisor is "<< gcd(n1,n2)<< endl;

    return 0;
}