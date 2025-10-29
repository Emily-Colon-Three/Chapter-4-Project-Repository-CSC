#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // In order of weight ranges they adhere to, the different rates per 500 miles of shipping are listed and defined here.
    const float RATE1 = 1.10;
    const float RATE2 = 2.20;
    const float RATE3 = 3.70;
    const float RATE4 = 4.80;

    // Defines the weight and distance, allowing the user to input them. Cost is defined here for later in the program.
    float weight, distance, cost;
    cout << "What is the weight of the package, in kg?\n";
    cin >> weight;
    cout << "What is the distance the package must be shipped, in miles?\n";
    cin >> distance;

    // A series of logical checks to give a message to the console if either of their values is outside of the intended range, returning 1 and ending the program if any are activated.
    if (weight <= 0)
    {
        cout << "Weight invalid: Below or at zero.\n";
        return 1;
    }
    if (weight > 20)
    {
        cout << "Weight invalid: Exceeds limit of 20 kg.\n";
        return 1;
    }
    if (distance < 10)
    {
        cout << "Distance invalid: Below minimum of 10 miles.\n";
        return 1;
    }
    if (distance > 3000)
    {
        cout << "Distance invalid: Above maximum of 3000 miles.\n";
        return 1;
    }

    // Will assign the cost variable depending on the range of weight the user's input falls into
    if (weight > 0 && weight < 2)
    {
        cost = RATE1 * (distance / 500);
    }
    else if (weight <= 6)
    {
        cost = RATE2 * (distance / 500);
    }
    else if (weight <= 10)
    {
        cost = RATE3 * (distance / 500);
    }
    else if (weight <= 20)
    {
        cost = RATE4 * (distance / 500);
    }

    // Gives the user the cost of shipping their package, and ends the program.
    cout << fixed << setprecision(2) << "The cost of shipping this package will be $" << cost << endl;
    return 0;
}
