#include "../std_lib_facilities.h"

int main()
{
  cout << "Please enter an integer as a text string: ";
  string s;
	while (cin>>s) {
		if (s == "zero")
            cout << s << " has the value 0\n";
		else if (s == "one")
            cout << s << " has the value 1\n";
		else if (s == "two")
            cout << s << " has the value 2\n";
		else if (s == "three")
            cout << s << " has the value 3\n";
		else if (s == "four")
            cout << s << " has the value 4\n";
		else
            cout << s << " does not have a numeric value I understand\n";
        cout << "Please enter another integer as a text string: ";
	}

  return 0;
}
