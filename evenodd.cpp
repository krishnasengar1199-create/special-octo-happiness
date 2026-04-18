#include <iostream>

using namespace std;

int main () {
    int num;

    cout << "Enter your number " << endl;
    cin >> num;

    if(num != 0){
        if(num % 2 == 0){
            cout << "It's an even number!" << endl;
        } else {
            cout << "It's an odd number!" << endl;
        }
    }else {
        cout << "It's Neither odd nor even, the number is zero!" << endl;
    }
    return 0;
}