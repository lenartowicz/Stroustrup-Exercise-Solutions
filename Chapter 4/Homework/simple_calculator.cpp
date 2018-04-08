#include "../../std_lib_facilities.h"

int main()
{
    double val1 = 0;
    double val2 = 0;
    char sign = 0;

    cout << "Enter the operation you want to perform: ";
    while (cin >> val1 >> sign >> val2)
    {
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
                result = val1 * val2;
                break;
            case '/':
                if (val2 == 0) simple_error("You can't divide by zero!");
                operation = "Ratio of ";
                result = val1 / val2;
                break;
            default:
                simple_error("I can't perform that operation!");
        }

        cout << operation << val1 << " and " << val2 << " is " << result;
        cout << "\n\n" << "Enter the next operation: ";
    }

    return 0;
}
