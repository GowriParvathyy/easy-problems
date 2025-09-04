#include <iostream>
using namespace std;
int main(){
    double width, length, area;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    area=width*length;

    cout << "The area of the rectangle is: " << area << endl;
}