#include "../../std_lib_facilities.h"

int main()
{
	vector<string> numbers(10);
	numbers[0] = "zero";
	numbers[1] = "one";
	numbers[2] = "two";
	numbers[3] = "three";
	numbers[4] = "four";
	numbers[5] = "five";
	numbers[6] = "six";
	numbers[7] = "seven";
	numbers[8] = "eight";
	numbers[9] = "nine";

	// Input prompt
	cout << "Enter one digit number (ex. '1', 'eight', '6'): ";

	// Input variables
	int num;
	string str;

	// Conversion variables
	int str_to_num;
	string num_to_str;

	// Conversion process
	if (cin >> num) // if the user input is a number
	{
		for (int i = 0; i < numbers.size(); ++i)
			if (num == i) num_to_str = numbers[i];

		cout << "You have entered: " << num_to_str << '\n';
	}
	else // if the user input is a string
	{
		cin.clear(); // clear the first failed user input
		cin >> str; // read the string input value

		for (int i = 0; i < numbers.size(); ++i)
			if (str == numbers[i]) str_to_num = i;

		cout << "You have entered: " << str_to_num << '\n';
	}

	return 0;
}
