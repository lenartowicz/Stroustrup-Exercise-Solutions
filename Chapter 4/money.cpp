// Marek Lenartowicz 07/12/2016
// Converts yen, dollars and euro to polish currency
// Enter the value followed by a unit

#include "../std_lib_facilities.h"

int main()
{
    const double zloty_per_yen  = 26.989;
    const double zloty_per_euro = 0.22273;
    const double zloty_per_dollar = 0.2371;
    const double zloty_per_koruna = 0.164246;
    double value = 0;
    char unit = 0;

    cout << "Enter the currency value: ";
    cin >> value >> unit;

    switch (unit)
    {
        case 'y':
            cout << value << " JPY = " << value/zloty_per_yen << " PLN";
            break;
        case 'e':
            cout << value << " EUR = " << value/zloty_per_euro << " PLN";
            break;
        case 'd':
            cout << value << " USD = " << value/zloty_per_dollar << " PLN";
            break;
        case 'k':
            cout << value << " CZK = " << value/zloty_per_koruna << " PLN";
            break;
        default:
            cout << "You have entered a wrong unit!";
            break;
    }

    return 0;
}
