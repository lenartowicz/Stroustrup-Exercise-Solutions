#include "../../std_lib_facilities.h"

int main()
{
    cout << "Think about a number ranging from 0-100..." << '\n';
    cout << "I will try to guess what number is in your head!" << '\n';
    cout << "Write (s) if smaller, (g) if greater or (c) if correct." << "\n\n";

    int counter = 0;
    int divider = 25;
    int current = 50;
    int guess_limit = 7;
    char answer = 0;

    while (counter < guess_limit && answer != 'c')
    {
        cout << "Smaller or greater than " << current << "?" << '\n';
        cin >> answer;

        if (answer == 's')
            current -= divider;
        if (answer == 'g')
            current += divider;

        if (divider > 1)
            divider = divider / 2;
        else
            divider = 1;

        ++counter;
    }

    if (answer == 'c')
    {
        cout << "\nYour number is " << current << "!" << '\n';
        cout << "I got it on " << counter << " try." << '\n';
    }
    else
        cout << "\nSorry, but I don't know what number it is..." << '\n';

    return 0;
}
