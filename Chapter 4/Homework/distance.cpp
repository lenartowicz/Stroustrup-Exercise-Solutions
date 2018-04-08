#include "../../std_lib_facilities.h"

int main()
{
    vector<double> distance;
    double value;

    while (cin >> value)
    {
        if (value <= 0) break;
        distance.push_back(value);
    }

    // Sum of all distance values
    double sum = 0;
    for (int i = 0; i < distance.size(); ++i)
        sum += distance[i];

    // Min and max distance values
    sort(distance.begin(), distance.end());
    double minimal = distance[0];
    double maximal = distance[distance.size() - 1];

    // Mean of all distances
    double mean = sum / distance.size();

    // Printing all the data
    cout << "Sum: " << sum << '\n';
    cout << "Min: " << minimal << '\n';
    cout << "Max: " << maximal << '\n';
    cout << "Mean: " << mean << '\n';

    return 0;
}
