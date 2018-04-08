#include "../../std_lib_facilities.h"

vector<string> names;
vector<int> scores;

void search_by_name(string);
void search_by_score(int);

int main()
{
	string name;
	int score;

	cout << "Enter player's name and score: ";
	while (cin >> name >> score && name != "NoName")
	{
		for (int i = 0; i < names.size(); ++i)
			if (name == names[i])
				simple_error("Name is already in the database!");

		names.push_back(name);
		scores.push_back(score);
		cout << "Enter another player: ";
	}

	// Print the scoreboard
	cout << "\nScoreboard:\n";
	for (int i = 0; i < names.size(); ++i)
		cout << "(" << names[i] << ", " << scores[i] << ")\n";

	// Search query
	while (true)
	{
		cout << "\nSearch for player or score (enter 'NoName' to quit): ";
		if (cin >> score)
			search_by_score(score);
		else
		{
			cin.clear();
			cin >> name;
			if (name == "NoName")
				break;
			search_by_name(name);
		}
	}

	return 0;
}

void search_by_name(string name)
{
	bool exist = false;
	for (int i = 0; i < names.size(); ++i)
		if (name == names[i])
		{
			exist = true;
			cout << "(" << names[i] << ", " << scores[i] << ")\n";
		}
	if (exist == false)
		cout << "Player not found!";
}

void search_by_score(int score)
{
	bool exist = false;
	for (int i = 0; i < scores.size(); ++i)
		if (score == scores[i])
		{
			exist = true;
			cout << "(" << names[i] << ", " << scores[i] << ")\n";
		}
	if (exist == false)
		cout << "Score not found!";
}
