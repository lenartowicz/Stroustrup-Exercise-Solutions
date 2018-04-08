#include "../std_lib_facilities.h"

int main()
{
    int counter = 0;
    double value = 0, smallest = 0, largest = 0, sum = 0;
    double conv_value = 0, conv_smallest = 0, conv_largest = 0;
    const double meters_cm = 0.01, meters_in = 0.0254, meters_ft = 0.3048;
    string unit = " ", smallest_unit = " ", largest_unit = " ";
    vector<double> entered_values;

    cout << "Enter the measurement (ex. 10cm): ";
    while (cin >> value >> unit)
    {
        if (unit == "cm")
        {
            conv_value = value*meters_cm;
        }
        else if (unit == "m")
        {
            conv_value = value*1;
        }
        else if (unit == "in")
        {
            conv_value = value*meters_in;
        }
        else if (unit == "ft")
        {
            conv_value = value*meters_ft;
        }
        else
        {
            cout << "You have entered wrong unit!" << '\n';
            cout << "\nNew measurement: ";
            continue;
        }

        ++counter;
        sum = sum + conv_value;
        entered_values.push_back(conv_value);

        cout << "You have entered " << value << unit << '\n';
        if (conv_value > conv_largest)
        {
            largest_unit = unit;
            conv_largest = conv_value;
            largest = value;
            cout << largest << unit << " is largest so far!" << '\n';
        }
        else if (conv_value < conv_smallest || smallest == 0)
        {
            smallest_unit = unit;
            conv_smallest = conv_value;
            smallest = value;
            cout << smallest << unit << " is smallest so far!" << '\n';
        }
        else
        {
            cout << smallest << smallest_unit << " is smallest so far" << '\n';
            cout << largest << largest_unit << " is largest so far" << '\n';

        }
/*
         if(abs(val1-val2) < 0.01*max(abs(val1), abs(val2)))
            cout << "\nNumbers are almost equal!";
*/
        cout << "\nEnter new measurement or sign <|> to end: ";
    }

    cout << '\n';
    cout << "Smallest value is " << smallest << smallest_unit << '\n';
    cout << "Largest value is " << largest << largest_unit << '\n';
    cout << "You have entered " << counter << " measurement(s)!" << '\n';
    cout << "The sum of all entered values: " << sum << "m\n";

    sort(entered_values.begin(), entered_values.end());
    cout << "Ascending order of measurements displayed in meters: " << '\n';
    for (int i = 0; i < entered_values.size(); ++i)
        cout << entered_values[i] << '\n';

    return 0;
}
