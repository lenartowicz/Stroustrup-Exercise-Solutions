#include "../../std_lib_facilities.h"

int main()
{
	int value = 0;
	vector<int> values;
	cout << "Enter some integer values: ";
	while (cin >> value)
		values.push_back(value);

	sort(values.begin(), values.end());

	cout << "Sorted values: ";
	for (int i = 0; i < values.size(); ++i)
		cout << values[i] << " ";

	int mode = 0;
	int mode_counter = 0;
	int current_value = values[0];
	int current_counter = 0;

	for (int i = 0; i < values.size(); ++i)
	{
		if (values[i] == current_value)
		{
			++current_counter;
			if (current_counter > mode_counter)
			{
				mode = current_value;
				mode_counter = current_counter;
			}
		}
		else
		{
			current_value = values[i];
			current_counter = 1;
		}
	}

	cout << " Mode: " << mode;
	cout << " Occurence: " << mode_counter;

	return 0;
}
