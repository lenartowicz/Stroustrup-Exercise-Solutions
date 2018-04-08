#include "../std_lib_facilities.h"

void square(int);

int main()
{
    for (int i = 0; i < 100; ++i)
        square(i);

    return 0;
}

void square(int v)
{
    cout << v << '\t';

    int sum = 0;
    for (int i = 0; i < v; ++i)
        sum += v;

    cout << sum << '\n';
}
