#include "../std_lib_facilities.h"

int main()
{
  double miles = 0;
  cout << "Enter the number of miles: ";
  cin >> miles;
  cout << miles << " miles is " << miles*1.609 << " kilometers\n";

  return 0;
}
