#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Defines pi for later, and establishes the variable for user choice and the area, which will become the output of the program.
    const float PI = 3.14159;
    int choice;
    double area;

    // Displays to the user their options for the Geometry Calculator
    cout << "Geometry Calculator\n";
    cout << "1. Calculate the area of a Circle\n";
    cout << "2. Calculate the area of a Rectangle\n";
    cout << "3. Calculate the area of a Triangle\n";
    cout << "4. Quit Program\n";
    cout << "Please enter a choice (1-4): ";

    // Takes the user choice, checking if it is within the valid range.
    cin >> choice;
    if (choice < 1 || choice > 4)
    {
        cout << "ERROR: Choice Invalid.\n";
        return 1;
    }

    // A switch statement to act on the 4 different possible user choices.
    switch (choice)
    {
    // Circle Area
    case 1:
        // Gets the radius of the user's circle
        double radius;
        cout << "Please enter the radius of the circle.\n";
        cin >> radius;

        // Validates that the radius value is not negative, or it will return an error to the user.
        if (radius < 0)
        {
            cout << "ERROR: Radius Invalid (No Negatives)\n";
            return 1;
        }

        // Calculates the area of the circle and returns it to the user.
        area = PI * pow(radius, 2);
        cout << "The area of this circle is " << area << " units squared.\n";
        break;

    // Rectangle Area
    case 2:
        // Gets the length and width of the rectangle.
        double length, width;
        cout << "Please enter the length of the rectangle.\n";
        cin >> length;
        cout << "Please enter the width of the rectangle.\n";
        cin >> width;

        // Ensures that the length and width are both not negative, else an error is displayed.s
        if (length < 0 || width < 0)
        {
            cout << "ERROR: Length or Width Invalid (No Negatives)\n";
            return 1;
        }

        // Gets the area of the user's rectangle and outputs it to console.
        area = length * width;
        cout << "The area of this rectangle is " << area << " units squared.\n";
        break;

    // Triangle Area
    case 3:
        // Gets the base and height of user triangle.
        double base, height;
        cout << "What is the base of the triangle?\n";
        cin >> base;
        cout << "What is the height of the triangle?\n";
        cin >> height;

        // Checks if the base or height is negative, and returns an error if that is the case.
        if (base < 0 || height < 0)
        {
            cout << "ERROR: Base or Height Invalid (No Negatives)\n";
            return 1;
        }

        // Gets the area of the triangle and gives it to the user.
        area = (base * height) * 0.5;
        cout << "The area of this triangle is " << area << " units squared.\n";
        break;

    // Quit Program
    case 4:
        return 0; // Ends the program if the user chooses the 4th option.
    }

    return 0; // If the program has not yet ended, this statement will do so.
}
