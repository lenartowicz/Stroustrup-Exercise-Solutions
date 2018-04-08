#include "../std_lib_facilities.h"

int main()
{
  int pennies = 0;
	int nickels = 0;
	int dimes = 0;
	int quarters = 0;
	int half_dollars = 0;
  int dollars = 0;

  cout << "How many pennies do you have? ";
  cin >> pennies;
  cout << "How many nickels do you have? ";
  cin >> nickels;
  cout << "How many dimes do you have? ";
  cin >> dimes;
  cout << "How many quarters do you have? ";
  cin >> quarters;
  cout << "How many half_dollars do you have? ";
  cin >> half_dollars;
  cout << "How many dollars do you have? ";
  cin >> dollars;

  if (pennies > 0) {
    cout << "You have " << pennies;
    if (pennies == 1)
      cout << " penny.\n";
    else
      cout << " pennies.\n";
  }
  if (nickels > 0) {
    cout << "You have " << nickels;
    if (nickels == 1)
      cout << " nickel.\n";
    else
      cout << " nickels.\n";
  }
  if (dimes > 0) {
    cout << "You have " << dimes;
    if (dimes == 1)
      cout << " dime.\n";
    else
      cout << " dimes.\n";
  }
  if (quarters > 0) {
    cout << "You have " << quarters;
    if (quarters == 1)
      cout << " quarter.\n";
    else
      cout << " quarters.\n";
  }
  if (half_dollars > 0) {
    cout << "You have " << half_dollars;
    if (half_dollars == 1)
      cout << " half dollar.\n";
    else
      cout << " half dollars.\n";
  }
  if (dollars > 0) {
    cout << "You have " << dollars;
    if (dollars == 1)
      cout << " dollar.\n";
    else
      cout << " dollars.\n";
  }

  double sum;
  sum = pennies+nickels*5+dimes*10+quarters*25+half_dollars*50+dollars*100;
  cout << "The value of your coins is " << sum << " cents($" << sum/100 << ")";

  return 0;
}
