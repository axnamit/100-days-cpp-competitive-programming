//Count digits of a number

#include<iostream>

using namespace std;

int main (){

    int n = 12345;
    int count = 0;
    if(n == 0){
        cout << "Length is 1"<<endl;

    }
    if(n < 0 ){
        n = -n ;
    }
    while( n > 0 ){
        count++;
        n = n/10;
    }
    cout << "length of this num "<< count <<endl;
    return 0;
}