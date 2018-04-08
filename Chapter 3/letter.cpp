#include "../std_lib_facilities.h"

int main()
{
  int age;
  char friend_sex;
  string first_name, friend_name;

  cout << "Enter the name and age of the receiver: ";
  cin >> first_name >> age;
  if (age <= 0 || age > 110) error("You must be joking!");
  cout << "Enter the name and sex of your mutual friend: ";
  cin >> friend_name >> friend_sex;

  cout << '\n';

  cout << "\nDear " << first_name << '\n';
  cout << " What are you up to? I am doing great but I miss you...\n";
  cout << "Have you seen " << friend_name << " lately? ";
  if (friend_sex == 'f')
    cout << "If you see her, tell her to give me a call.\n";
  else if (friend_sex == 'm')
    cout << "If you see him, tell him to give me a call.\n";

  cout << "I heard you had " << age << "th birthday recently! ";
  if (age == 17)
    cout << "Next year you will be eligible to vote.\n";
  else if (age > 70)
    cout << "Have a nice time on your retirement.\n";
  else
    cout << "Next year you will be " << age+1 << " years old.\n";

  cout << "\nYours truly, " << '\n' << '\n' << "Marek\n";

  return 0;
}
