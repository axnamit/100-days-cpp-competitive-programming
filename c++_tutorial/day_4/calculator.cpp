#include <iostream>
using namespace std;

// Calculator using switch case
int main() {

    int option;
    float a, b;

    cout << "Choose option what operation you want\n";
    cout << "Sum press 1\n"
         << "Subtract press 2\n"
         << "Multiplication press 3\n"
         << "Division press 4\n";

    cin >> option;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (option) {
        case 1:
            cout << "Sum is " << a + b << endl;
            break;

        case 2:
            cout << "Subtract is " << a - b << endl;
            break;

        case 3:
            cout << "Multiplication is " << a * b << endl;
            break;

        case 4:
            if (b != 0)
                cout << "Division is " << a / b << endl;
            else
                cout << "Division by zero not allowed\n";
            break;

        default:
            cout << "Invalid option selected\n";
    }

    return 0;
}
