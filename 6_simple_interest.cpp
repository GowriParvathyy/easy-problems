#include <iostream>
using namespace std;

int main(){
    double principal, rate, time, si;
    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter Rate of Intrest: ";
    cin >> rate;

    cout << "Enter Time: ";
    cin >> time;

    si=(principal* rate * time)/100;
    cout << "Simple Intrest = " << si << endl;
}