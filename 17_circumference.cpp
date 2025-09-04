#include <iostream>
using namespace std;

int main(){
    int radius, circumference;

    cout << "Enter the radius: ";
    cin >> radius;

    circumference = 2* 3.14 * radius;
    cout << "The circumference is " << circumference << endl;
}