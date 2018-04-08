#include "../../std_lib_facilities.h"

int main()
{
	double per_square = 1;
	double total = 0;

	for (int square = 1; square <= 64; ++square)
	{
		total += per_square;

		cout << "Square: " << square << " " << "Rice: " << per_square << '\n';
		cout << "\tTotal: " << total << "\n\n";

		per_square *= 2;
	}

	return 0;
}
