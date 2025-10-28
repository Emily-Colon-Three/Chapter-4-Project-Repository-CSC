#include <iostream>

using namespace std;

int main()
{
    // The values for the number of days in each month, February's being it's usual value (when NOT a leap year)
    const int JANUARY_DAYS = 31;
    const int FEBRUARY_DAYS = 28;
    const int MARCH_DAYS = 31;
    const int APRIL_DAYS = 30;
    const int MAY_DAYS = 31;
    const int JUNE_DAYS = 30;
    const int JULY_DAYS = 31;
    const int AUGUST_DAYS = 31;
    const int SEPTEMBER_DAYS = 30;
    const int OCTOBER_DAYS = 31;
    const int NOVEMBER_DAYS = 30;
    const int DECEMBER_DAYS = 31;

    // The variables of the program, a flag for if the year is a leap year, the values for the months and years given by the user, and the number of days which will be output.
    bool isLeapYear = 0;
    int month, year, days;

    // Gets the month and year from the user
    cout << "What is the month (1-12)?\n";
    cin >> month;
    cout << "What is the year?\n";
    cin >> year;

    // This block of code checks whether or not the given year is a leap year. If it is divisible by 4 but not 100 or by 400, then the flag is set to true.
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
            isLeapYear = true;
    }
    else if (year % 4 == 0)
        isLeapYear = true;

    // This portion of the source checks if the month given by the user is within a ranger of 1-12. If not, it is automatically set to 1, January.
    if (month < 1 || month > 12)
    {
        month = 1;
        cout << "NOTICE: Your month was invalid and automatically changed to Januaray (1)\n";
    }

    // A very long section of code which sets the number of days to the constant corresponding to the month input by the user, adding a day to February on leap years.
    switch (month) {
    case 1:
        {
            days = JANUARY_DAYS;
            break;
        }
    case 2: // This is the case for February, which has logic inside to add an extra day if it is a leap year
        {
            if (isLeapYear)
                days = FEBRUARY_DAYS + 1;
            else
                days = FEBRUARY_DAYS;
            break;
        }
    case 3:
        {
            days = MARCH_DAYS;
            break;
        }
    case 4:
        {
            days = APRIL_DAYS;
            break;
        }
    case 5:
        {
            days = MAY_DAYS;
            break;
        }
    case 6:
        {
            days = JUNE_DAYS;
            break;
        }
    case 7:
        {
            days = JULY_DAYS;
            break;
        }
    case 8:
        {
            days = AUGUST_DAYS;
            break;
        }
    case 9:
        {
            days = SEPTEMBER_DAYS;
            break;
        }
    case 10:
        {
            days = OCTOBER_DAYS;
            break;
        }
    case 11:
        {
            days = NOVEMBER_DAYS;
            break;
        }
    case 12:
        {
            days = DECEMBER_DAYS;
            break;
        }
    default:
        return 1;
    }

    // Gives the number of days in a particular year's month to the user, the final action needed for the program to take.
    cout << days << " days are in the month of that year.\n";

    return 0;
}
