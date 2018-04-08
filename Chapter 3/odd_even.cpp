#include "../std_lib_facilities.h"

int main()
{
  int val = 0;
  cout << "Enter the integer value: ";
  cin >> val;
  if (!cin) error("Something went wrong!");

  if (val%2 == 0) cout << val << " is an even number\n";
  else cout << val << " is an odd number\n";

  return 0;
}
