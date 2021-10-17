
#include <iostream>

#include <iomanip>  

using namespace std;

int main()
{
    // Variables
    int seconds;
    float number_minutes;

    // Ask user to enter a number of seconds
    cout << "\nEnter a number of seconds: ";
    cin >> seconds;

    
    if (seconds <= 59)
    {
        cout << seconds;
        cout << " is less that 60 seconds." << endl;
    }
    else if (seconds >= 60 && seconds < 3600)
    {
        number_minutes = seconds / 60.0;
        cout << number_minutes << " minutes in ";
        cout << seconds << " seconds" << endl;
    }
    else if (seconds >= 3600 && seconds < 86400)
    {
        number_minutes = seconds / 3600.0;
        cout << number_minutes << " hours in ";
        cout << seconds << " seconds" << endl;
    }


    else if (seconds >= 86400)
    {
        number_minutes = seconds / 86400.0;
        cout << number_minutes << " days in ";
        cout << seconds << " seconds" << endl;
    }

    
    cout << endl << endl;

   
    return 0;
}