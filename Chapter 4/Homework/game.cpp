#include "../../std_lib_facilities.h"

vector<string> computer;

int val1 = 1;
int val2 = 2;

int fibbonacci();
void generate_number(int);
void populate_vector(int);

int main()
{
	int seed = 0; // user input - iterations of fibbonacci function
	int turns = 0; // user input - how many turns to play
	int counter = 1; // turn counter starting from 1
	int player_points = 0;
	int computer_points = 0;

	cout << "Witaj w grze \"Kamien, Papier, Nozyce\"\n";
	cout << "Aby komputer mogl z Toba zagrac, potrzebuje on Twojej pomocy.\n";
	cout << "Wprowadz dowolna liczbe calkowita i wcisnij <ENTER> -> ";
	cin >> seed;

	if (!seed) simple_error("Wprowadziles zla wartosc!");

	cout << "Ile rund chcialbys zagrac z komputerem? -> ";
	cin >> turns;

	if (turns <= 0) simple_error("Wartosc musi byc wieksza od 0!");

	populate_vector(turns);

	cout << "\nDokonujac wyboru, wpisz w pole \"kamien\", \"papier\" lub \"nozyce\".";
	cout << "\nPowodzenia, trzymam za Ciebie kciuki! :-)\n";
	while (turns != 0)
	{
		generate_number(seed);	// generate a pseudo-random number

		cout << "\n- Runda " << counter << " -";
		cout << "\nTwoj wybor: ";
		string player_choice;
		cin >> player_choice;

		// Randomized value that doesn't exceed the vector size
		string computer_choice = computer[fibbonacci()%computer.size()];

		cout << "\nKomputer wylosowal " << computer_choice << ".";

		if (player_choice == "kamien" && computer_choice == "kamien" ||
			player_choice == "papier" && computer_choice == "papier" ||
			player_choice == "nozyce" && computer_choice == "nozyce")
		{
			cout << "\nRemis! Nikt nie zdobywa punktu. ";
		}
		else if (player_choice == "kamien" && computer_choice == "papier" ||
				 player_choice == "papier" && computer_choice == "nozyce" ||
				 player_choice == "nozyce" && computer_choice == "kamien")
		{
			cout << "\nKomputer wygrywa pojedynek! ";
			++computer_points;
		}
		else if (player_choice == "kamien" && computer_choice == "nozyce" ||
				 player_choice == "papier" && computer_choice == "kamien" ||
				 player_choice == "nozyce" && computer_choice == "papier")
		{
			cout << "\nWygrywasz pojedynek! ";
			++player_points;
		}
		else
		{
			cout << "\nWprowadziles zla wartosc! Sprobuj ponownie...\n";
			--counter;
			++turns;
		}

		cout << "Punkty -> Gracz: " << player_points <<
				" Komputer: " << computer_points << '\n';

		++counter;
		--turns;
	}

	if (player_points < computer_points)
		cout << "\nKomputer ostatecznie wygrywa gre. Wstydz sie!\n";
	else if (player_points > computer_points)
		cout << "\nWygrywasz ostatecznie gre. Gratulacje!\n";
	else
		cout << "\nWyglada na to, ze gra zakonczyla sie remisem!\n";

	return 0;
}

int fibbonacci()
{
	int result = val1 + val2; // val1 = 1, val2 = 2 at the start
	if (result <= 0) result = 1; // when we would run out of integer memory
	val1 = val2;
	val2 = result;
	return result;
}

void generate_number(int seed)
{
	if (seed < 0) seed = -seed; // change negative entry to integer value
	if (seed == 0) return; // if seed==0 return the default variable value
	if (seed > 0)
	{
		for (int i = 0; i < seed; ++i) fibbonacci();
	}
	else cout << "Cos poszlo nie tak przy generowaniu losowej liczby!";
}

void populate_vector(int turns)
{
	for (int i = 0; i < turns; ++i)
	{
		computer.push_back("kamien");
		computer.push_back("papier");
		for (int j = 0; j < turns; ++j)
		{
			computer.push_back("nozyce");
			computer.push_back("kamien");
			computer.push_back("papier");
		}
		computer.push_back("nozyce");
	}
}
