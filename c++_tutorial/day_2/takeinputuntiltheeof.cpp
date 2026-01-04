#include<iostream>
using namespace std;
//Take input until EOF and print sum
int main(){

    int x;
    long long sum = 0;
    cout << "Enter number you want to save ";
    while(cin >> x){
        sum+=x;
    }
    cout << "Sum of this all inputs " << sum << endl;
    return 0;
}