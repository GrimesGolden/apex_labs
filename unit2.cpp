//
//
#include <iostream>
#include <iomanip>
#include <sstream>
#include "apex_code.h"

using namespace std;

void minutes_to_12hour_time(stringstream &cin, stringstream &cout) {
    // Place code for translating minutes to 12 hour time
    // Pretend this is your main function and you can use cin/cout
    // as you would in main.

    // Declare variable to store users input as integer.
    int userInput;
    // Obtain data from cin and store it. 
    cin >> userInput;
    // Divide by 60 to obtain hours
    int hours = userInput / 60;
    // Obtain modulo of those hours, to format hours (0 - 12);
    // Calculate modulo to obtain minutes.
    hours = hours % 12; 
    // Calculate modulo to obtain minutes.
    int minutes = userInput % 60;
    
    // If you want to print to the console for debugging use std::cout.
    // Use cout for your final solution.This 
    // Format and output to terminal.
    cout << hours << ":" << minutes << " !";
    
    
    // First you want to get user input with cin
    // Do any needed calculations
    // Create output with cout
    
}

void numbers_to_12hour_time(stringstream& cin, stringstream& cout)
{
  // Create variables to store user inputs.
    double userHours;
    int userMins;
    int userSeconds;
  
  // Create variables to store calculated variables.
    int hours;
    double mins;
    int intMins;
    int seconds;
  

    // Obtain user data and store (note that hours are type double)
    cin >> userHours;
    cin >> userMins;
    cin >> userSeconds;

    // Perform calculations to obtain total minutes as a double.
    mins += (userHours * 60);
    mins += userMins;
    mins += userSeconds / 60;
    mins += (userSeconds % 60) * 0.01;

    // Calculate hours and convert to 12 hour format using modulo.
    hours = mins / 60;
    hours %= 60;

    // Hours obtained
    // Now obtain mins and convert to integer.
    // Finally, subtract the minutes that have already been converted into hours. (line 73)
    intMins = mins / 60;
    mins -= (intMins * 60);

    // Convert that number to int
    intMins = mins * 1;

    // Now obtain seconds by obtaining the remaining seconds.
    // Use modulo to verify these second shave not been already calculated as minutes.
    seconds = userSeconds % 60;

    // Output the formatted data. Output seconds as a psuedo decimal.
    cout << hours << ":" << intMins << "." << seconds << " !";
    
}
