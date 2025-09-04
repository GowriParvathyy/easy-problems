#include <iostream>
using namespace std;

int main() {
    int len,sum = 0;  

    cout << "Enter a number: ";
    cin >> len;

    for (int i = 1; i <= len; i++) {
        sum = sum + i;
    }

    cout << "The sum of the first " << len << " natural numbers is: " << sum << endl;
}
