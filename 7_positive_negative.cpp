#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter number: ";
    cin >> num ;
    if(num >0){
        cout << num << " is a Positive number" << endl;
    }

    else if(num <0){
        cout << num << " is Negative number" << endl;
    }

    else{
        cout << "The number is zero" << endl;
    }
    }