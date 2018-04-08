#include "../../std_lib_facilities.h"

// Globally declared vector
vector<string> numbers;

// Function prototypes
void initialize_numbers();
int get_number();

int main()
{
	// Push predefined numbers to a vector container
	initialize_numbers();

	// Input prompt
	cout << "Enter the operation you want to perform: ";

    while (true)
    {
		int val1 = get_number();

		char sign = 0;
		cin >> sign;

		int val2 = get_number();

        string operation;
        double result;

        switch (sign)
        {
            case '+':
                operation = "Sum of ";
                result = val1 + val2;
                break;
            case '-':
                operation = "Difference between ";
                result = val1 - val2;
                break;
            case '*':
                operation = "Product of ";
                result = double(val1 * val2);
                break;
            case '/':
                if (val2 == 0) simple_error("You can't divide by zero!");
                operation = "Ratio of ";
                // Because dividing integers would return a wrong result
                // I have decided to cast one value into double
                result = static_cast<double>(val1) / val2;
                break;
            default:
                simple_error("I can't perform that operation!");
        }

        cout << operation << val1 << " and " << val2 << " is " << result;
        cout << "\n\n" << "Enter the next operation: ";
    }

	return 0;
}

void initialize_numbers()
{
	numbers.push_back("zero");
	numbers.push_back("one");
	numbers.push_back("two");
	numbers.push_back("three");
	numbers.push_back("four");
	numbers.push_back("five");
	numbers.push_back("six");
	numbers.push_back("seven");
	numbers.push_back("eight");
	numbers.push_back("nine");
}

int get_number()
{
	// if the user input is a number
	int num = 0;
	if (cin >> num) return num;
	else // if the user input is a string
	{
		cin.clear(); // clear the first failed user input

		string str;
		cin >> str; // read the string input value

		for (int i = 0; i < numbers.size(); ++i)
			if (str == numbers[i]) return i;
	}
}
