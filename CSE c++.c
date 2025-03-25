#include <iostream>
using namespace std;

int main() {
    // Variables for triangle
    double base, height;

    // Variables for rectangle
    double length, width;

    // Input for triangle
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    // Calculate area of the triangle
    double triangleArea = 0.5 * base * height;
    cout << "The area of the triangle is: " << triangleArea << endl;

    // Input for rectangle
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Calculate area of the rectangle
    double rectangleArea = length * width;
    cout << "The area of the rectangle is: " << rectangleArea << endl;

    return 0;
}
