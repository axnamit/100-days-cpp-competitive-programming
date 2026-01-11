//Check palindrome number

#include<iostream>
using namespace std;
bool checkpalindrome(int n){
    int orignal = n ;
    int rev = 0;
    while(n) rev=rev* 10 + n%10 , n/=10;
    return orignal == rev;
}
int main(){
    int n = 1001;
    cout<< "palindrome 1001 " << checkpalindrome(n)<<endl;
    n = 2005;
    cout<< "palindrome 2005 " << checkpalindrome(n)<<endl;

}

