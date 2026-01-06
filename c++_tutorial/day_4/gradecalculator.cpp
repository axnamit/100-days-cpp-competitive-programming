#include<iostream>
//Grade calculator (A/B/C/F)
using namespace std;


/*
90–100 → A

80–89 → B

70–79 → C

60–69 → D

< 60 → F*/
int main(){

    float number;
    cout << "Enter your percentage to calcuate grade"<<endl;
    cin >> number ;
    int grade = number/10;
    switch (grade){
        case 9:
            cout << "You got grade A"<<endl;
            break;
        case 8:
            cout << "You got grade B"<<endl;
            break;
        case 7:
            cout << "You got grade C"<<endl;
            break;
        case 6:
            cout << "You got grade D"<<endl;
            break;
        default  :
            cout << "Sorry ! Dear you failed."<< endl;
    }
    return 0;
}