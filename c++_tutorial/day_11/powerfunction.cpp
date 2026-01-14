//Power function (fast exponentiation)

#include<iostream>
using namespace std;

double power(int base, int exp){
    double result  = 1.0;
    int ex = abs(exp);
    for(int i=0;i< ex;i++ ){
        result *= base;
    }

    if(exp < 0){
        return 1.0 /result;
    }
    return result;

}
int main(){
    cout << "enter a number and power"<< endl;
    int base;
    int exp;
    cin>> base >>exp;
    cout << "power function "<< power(base, exp) << endl;

    return 0;
}