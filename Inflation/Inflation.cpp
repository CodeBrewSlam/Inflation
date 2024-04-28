// Emilio Ramirez
// Inflation
// This program gets user input for annual inflation rate between 1 and 10 percent.
// It then calculates how much $1000 will be worth for each of the next 10 years and displays the information in a table.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    system("cls");
    
    // Declare constant variables for max years and the original value of $1000
    const int MAX_YEARS = 10;
    const double originalValue = 1000.00;

    // Declare variables for the current year, updated value, and the inputted inflation rate
    double inflationRate = 0.0;
    double newValue = 0.0;
    int currentYear = 2024;

    // Do-while loop to ask and validate user input
    do
    {
        system("cls");

        cout << "Enter an annual inflation rate between 1% and 10%: ";
        cin >> inflationRate;

        // If statement if user enters invalid input
        if (inflationRate < 1 || inflationRate > 10)
        {
            cout << "\nERROR - Please enter a number between 1 and 10.\n\n";
            system("pause");
        }

        // End line to add a space between output for better display
        cout << endl;

    } while (inflationRate < 1 || inflationRate > 10);

    // Update new value
    newValue = 1 / ((inflationRate / 100) + 1) * originalValue;
    
    // Explain what and how the output is displayed
    cout << "\nThe following table displays how much $1,000 will be worth each year\n";
    cout << "for the next 10 years based on an annual rate of inflation of " << inflationRate << "%.\n\n";
    cout << "Year\t\tValue\n";
    cout << "------------------------\n";
    cout << fixed << setprecision(2);
    
    // For loop to iterate through each of the next 10 years and update the year, the new value for each year and display both in a table
    for (int i = 0; i <= MAX_YEARS; i++)
    {
        cout << currentYear << "\t\t$" << newValue << endl;
        newValue = 1 / ((inflationRate / 100) + 1) * newValue;
        currentYear++;
    }

    // End line to add a space between output for better display
    cout << endl;

    system("pause");

    return 0;
}

