#include "../std_lib_facilities.h"

int main()
{
  string val1 = " ", val2 = " ", val3 = " ";
  cout << "Enter three string values: ";
  cin >> val1 >> val2 >> val3;
  if (!cin) error("Something went wrong!");

  string smallest = " ", middle = " ", largest = " ";
  if (val1<=val2 && val1<=val3) {
    smallest = val1;
    if (val2<=val3) {
      middle = val2;
      largest = val3;
    }
    else {
      middle = val3;
      largest = val2;
    }
  }
  else if (val2<=val1 && val2<=val3) {
    smallest = val2;
    if (val1<=val3) {
      middle = val1;
      largest = val3;
    }
    else {
      middle = val3;
      largest = val1;
    }
  }
  else {
    smallest = val3;
    if (val1<=val2) {
      middle = val1;
      largest = val2;
    }
    else {
      middle = val2;
      largest = val1;
    }
  }

  cout << "Values sorted: " << smallest << ", " << middle << ", " << largest;

  return 0;
}
