//Sum of first N natural numbers
#include<iostream>

using namespace std;

int main(){

    int i =1,n;
    int sum = 0;
    cout << "Enter to number "<< endl;
    cin >> n;
    while(i <= n){
        sum +=i;
        i++;
    }
    cout << "Sum of "<< sum << endl;
    return 0;
}