#include <iostream>
#include <cmath>

using namespace std;

void calculateTriangleArea() {
    double base, height, area;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    area = 0.5 * base * height;
    cout << "The area of the triangle is: " << area << endl;
}

void calculateRectangleArea() {
    double length, width, area;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    area = length * width;
    cout << "The area of the rectangle is: " << area << endl;
}

void calculateSquareArea() {
    double side, area;
    cout << "Enter the side length of the square: ";
    cin >> side;
    area = side * side;
    cout << "The area of the square is: " << area << endl;
}

int main() {
    int choice;
    while (true) {
        cout << "Please select the area of the shape to calculate:" << endl;
        cout << "1. Triangle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Square" << endl;
        cout << "4. Quit Program" << endl;
        cout << "Enter selection: ";
        cin >> choice;

        switch (choice) {
            case 1:
                calculateTriangleArea();
                break;
            case 2:
                calculateRectangleArea();
                break;
            case 3:
                calculateSquareArea();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid input. Please enter a valid option." << endl;
                break;
        }
    }
    return 0;
}
