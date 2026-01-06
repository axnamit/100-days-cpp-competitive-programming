/*
| Condition                  | Triangle Type |
| -------------------------- | ------------- |
| a == b == c                | Equilateral   |
| a == b OR b == c OR a == c | Isosceles     |
| All sides different        | Scalene       |

*/

#include<iostream>

using namespace std;

int main (){

    cout << "Enter tringle sides "<< endl;
    int a,b,c;

    cin >> a>>b>>c;
    if (a == b && b == c){
        cout << "Tringle is Equilateral"<< endl;
    }else if(a == b || b == c || a == c){
        cout << "Tringle is Isosceles" << endl;
    }else{
        cout << "Tringle is Scalene" << endl;

    }
    return 0;
}