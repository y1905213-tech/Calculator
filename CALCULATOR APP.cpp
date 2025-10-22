#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "ENTER THE FIRST NUMBER: ";
    cin >> num1;
    cout << "ENTER THE SECOND NUMBER: ";
    cin >> num2;
    cout << "ENTER THE OPERATOR (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 / num2;
            else
                cout << "Error: Division by zero!";
            break;
        default:
            cout << "INVALID OPERATOR";
    }

    return 0;
}


