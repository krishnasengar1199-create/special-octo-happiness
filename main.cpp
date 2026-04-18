#include <iostream>

using namespace std;

int main() {
    int num1, num2, i, flag;
    char operation;

    cout << "Enter the operation you want to perform" << endl;
    cin >> operation;

    cout << "Enter the first number " << endl;
    cin >> num1;

    cout << "Enter the second number " << endl;
    cin >> num2;


    switch (operation) {
        case '+':
            cout << "The answer is : " << num1 + num2 << endl;
            break;
        
        case '-':
            cout << "The answer is : " << num1 - num2 << endl;
            break;

        case '*':
            cout << "The answer is : " << num1 * num2 << endl;
            break;

        case '/':
            if (num2 != 0) {
                cout << "The answer is : " << num1 / num2 << endl;
            }
            else {
                cout << "Your problem is invalid!. any number cannot be divisible by zero!" << endl;
            } 
            break;

            default:
                cout << "The following numbers are invalid!";
            break;
    }
    return 0;
}
