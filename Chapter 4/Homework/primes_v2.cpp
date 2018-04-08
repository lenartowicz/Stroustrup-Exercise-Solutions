#include "../../std_lib_facilities.h"

int main()
{
	vector<int> primes;

	primes.push_back(2);

	int limit = 0; // user input - numbers range limit
	cout << "How many primes would you like: ";
	cin >> limit;

	if (limit <= 0) simple_error("You have entered a wrong value!");

	for (int i = 1; i <= 100; ++i)
	{
		if (i == 1 || i == 2) continue;
		else
		{
			for (int j = 0; j < primes.size(); ++j)
			{
				if (i % primes[j] == 0) break;
				else
				{
					if (j == primes.size()-1) primes.push_back(i);
				}
			}
		}
	}

	cout << "Primes you asked for:\n";
	for (int i = 0; i < limit; ++i)
		cout << primes[i] << " ";

	return 0;
}
