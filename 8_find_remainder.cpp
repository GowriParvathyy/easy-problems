#include <iostream>
using namespace std;
int main(){
    int dividend, divisor, remainder;
    cout << "Enter the dividend: ";
    cin >> dividend;

    cout << "Enter the divisor: ";
    cin >> divisor;

    remainder= dividend % divisor;
    cout << "Remainder = " << remainder << endl;
}