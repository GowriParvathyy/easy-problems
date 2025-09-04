#include <iostream>
using namespace std;

int main() {
    int len,product = 1;  

    cout << "Enter a number: ";
    cin >> len;

    for (int i = 1; i <= len; i++) {
        product=product * i;
    }

    cout << "The product of the first " << len << " natural numbers is: " << product << endl;
}
