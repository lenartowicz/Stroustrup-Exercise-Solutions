#include "../std_lib_facilities.h"

int main()
{
  string operation = " ";
  double val1 = 0, val2 = 0;
  cout << "Enter the math operator first and numbers separated by spaces: ";
  while (cin >> operation >> val1 >> val2) {
    if (operation == "+" || operation == "plus")
      cout << val1 << " + " << val2 << " = " << val1+val2 << '\n';
    else if (operation == "-" || operation == "minus")
      cout << val1 << " - " << val2 << " = " << val1-val2 << '\n';
    else if (operation == "*" || operation == "mul")
      cout << val1 << " * " << val2 << " = " << val1*val2 << '\n';
    else if (operation == "/" || operation == "div") {
      if (val2==0) error("Trying to divide by zero!");
      cout << val1 << " / " << val2 << " = " << val1/val2 << '\n';
    }
    else
      cout << "You have entered something wrongly...\n";
    cout << "Enter another equation: ";
  }

  return 0;
}
