//LCM(a, b) = (a × b) / GCD(a, b)
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
    cout<< "LCM of this number is "<< (n1 * n2)/gcd(n1,n2)<<endl;
    return 0;
}