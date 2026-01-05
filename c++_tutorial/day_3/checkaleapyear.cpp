/*
if year is divisible by 4 

if no it is not leap year

if yes 
 is this year divisble by 100 

 if no it is leap year 

 if yes 
  is this divisble by 400
if no it is not leap year 

if yes it is leap year 

*/


#include<iostream>

using namespace std;

int main(){

    int year;
    cout << "Enter year you want to check if it is leap year "<< endl;
    cin >> year;

    if(year % 4 == 0){
        if (year % 100 == 0){
            if(year % 400){
                cout << year << " Is a leap year" << endl;

            }else{
                        cout << year << " Is not a leap year" << endl;

            }

        }else{
        
            cout << year << " Is a leap year" << endl;

        }
    }else{
        cout << year << " Is not a leap year" << endl;
    }
    
    return 0;
}