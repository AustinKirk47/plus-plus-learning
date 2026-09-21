#include "table_printer.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void multiComponentTest()
{
    // Some information stored in variables.
    string name     = "C++ Programming";
    string version  = "C++17";
    string creator  = "Bjarne Stroustrup";
    int yearCreated = 1985;
    int progress = 80;
    bool isBasedOnC = true;
    double pi = 3.14159265358979323846;

    // Display header.
    cout << "=================================================" << endl;
    cout << "=            MULTI-COMPONENT PROGRAM            =" << endl;
    cout << "=================================================" << endl;
    cout << "This program demonstrates using multiple headers " << endl;
    cout << "and formatting techniques in C++." << endl << endl;

    // Display the stored information.
    cout << "Language: " << name << endl;
    cout << "Version: " << version << endl;
    cout << "Creator: " << creator << endl;
    cout << "Year Created: " << yearCreated << endl;
    cout << "Is based in C: " <<  (isBasedOnC ? "Is based on C." : "Is not based on C.") << endl << endl;

    // Display pi to varying precision.
    cout << "The following values are Pi displayed to..." << endl;
    cout << fixed << setprecision(2);
    cout << "2 decimal places: " << pi << endl;
    cout << fixed << setprecision(6);
    cout << "6 decimal places: " << pi << endl;
    cout.unsetf(ios::fixed);
    cout << "Default precision: " << pi << endl << endl;

    // Display a table example
    print_table();

    // Display simulated progress bar
    cout << "Completion: [";
    for (int i = 0; i < 20; i++)
    {
        if (i < (progress / 5))
        {
            cout << "=";
        }
        else
        {
            cout << " ";
        }
    }
    cout << "] " << progress << "%" << endl;
}