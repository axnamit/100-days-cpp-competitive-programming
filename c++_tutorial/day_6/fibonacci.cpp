//fibnoacci series 

#include<iostream>

using namespace std;

int main(){

    int f1  = 0, f2 = 1;
    // cout << "F1 " << f1 << " f2 " << f2<<endl;
    int n = 10;
    while (n > 0 ){
        
        int temp = f1+ f2;

        f1 = f2 ;
        f2 = temp;
        cout   << f2<<endl;

        n--;
    }
    return 0;
}