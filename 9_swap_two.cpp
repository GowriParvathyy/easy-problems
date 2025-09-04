#include <iostream>
using namespace std;

int main(){
    int num1, num2, temp;
    cout << "Emter first number: ";
    cin >> num1;

    cout << "Emter second number: ";
    cin >> num2;

    cout << "Before swapping: num 1 = " << num1 << ", num 2 = " << num2 << endl;

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout << "After swapping: num 1 = " << num1 << ", num 2 = " << num2 << endl;
}