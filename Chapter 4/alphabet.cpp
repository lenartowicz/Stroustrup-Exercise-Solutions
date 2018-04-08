// Marek Lenartowicz 08/12/2016
// Program that prints out the alphabet and corresponding ASCII values

#include "../std_lib_facilities.h"

int main()
{
    for (int i = 0; i < 26; ++i)
        cout << char('A' + i) << '\t' << 'A' + i << '\n';

    return 0;
}
