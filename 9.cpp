//Construct a Program in C++ to show the working of function overloading(compile time polymorphism) by using a function named calculate Area () to calculate area of square, rectangle and triangle using different signatures as required.
#include <iostream>

using namespace std;

// Function to calculate the area of a square
double calculateArea(double side) {
    return side * side; // Area = side^2
}

// Function to calculate the area of a rectangle
double calculateArea(double length, double width) {
    return length * width; // Area = length * width
}

// Function to calculate the area of a triangle
double calculateArea(double base, double height, int isTriangle) {
    return 0.5 * base * height; // Area = 0.5 * base * height
}

int main() {
    double squareSide, rectangleLength, rectangleWidth, triangleBase, triangleHeight;

    // Input for square
    cout << "Enter the side of the square: ";
    cin >> squareSide;
    cout << "Area of the square: " << calculateArea(squareSide) << endl;

    // Input for rectangle
    cout << "Enter the length and width of the rectangle: ";
    cin >> rectangleLength >> rectangleWidth;
    cout << "Area of the rectangle: " << calculateArea(rectangleLength, rectangleWidth) << endl;

    // Input for triangle
    cout << "Enter the base and height of the triangle: ";
    cin >> triangleBase >> triangleHeight;
    cout << "Area of the triangle: " << calculateArea(triangleBase, triangleHeight, 1) << endl;

    return 0;
}
