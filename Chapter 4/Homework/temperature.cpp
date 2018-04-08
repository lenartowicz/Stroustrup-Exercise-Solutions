#include "../../std_lib_facilities.h"

int main()
{
    vector<double> temps;           // temperatures container
    double temp;
    while (cin >> temp)             // user input loop
        temps.push_back(temp);      // pushing data into vector container

// Calculating the average temperature
    double sum = 0;
    for (int i = 0; i < temps.size(); ++i)
        sum += temps[i];
    cout << "The average temperature: " << sum/temps.size() << '\n';

// Calculating the median
    sort(temps.begin(), temps.end());
    double median = 0;

    // If the size is even then calculate an average out of two middle elements
    if (temps.size()%2 == 0)
        median = (temps[temps.size()/2 - 1] + temps[temps.size()/2]) / 2;

    // If it is odd then just get the middle element
    else
        median = temps[(temps.size()-1)/2];

    cout << "The median of temperatures: " << median << '\n';

    return 0;
}
