#include "../../std_lib_facilities.h"

int main()
{
    cout << "Pomyśl o liczbie z przedziału od 1 do 100.\n";
    cout << "Przy każdej mojej próbie odgadnięcia, musisz napisać czy Twoja liczba jest\n";
    cout << "(w)iększa lub (m)niejsza niż ta przedstawiona przeze mnie.\n";
    cout << "Jeśli liczba przedstawiona jest poprawnie odgadnięta, napisz 'p'.\n";

    int guess = 50;
    vector<int> differences(6);
    differences[0] = 30;
    differences[1] = 15;
    differences[2] = 5;
    differences[3] = 3;
    differences[4] = 2;
    differences[5] = 1;
    int counter = 0;
    char answer = ' ';

    while (answer != 'p') {
        cout << "\nMój strzał to: " << guess << endl;
        ++counter;
        cout << "Twoja liczba jest mniejsza czy większa niż przedstawiona? ";
        cin >> answer;
        switch (answer) {
        case 'p':
            break;
        case 'w':
            if (counter <= differences.size())
                guess += differences[counter-1];
            else
                ++guess;
            break;
        case 'm':
            if (counter <= differences.size())
                guess -= differences[counter-1];
            else
                --guess;
            break;
        default:
            cout << "To nie jest poprawna odpowiedź, używaj 'p', 'm' lub 'w'!\n";
            --counter;
            break;
        }
        if (guess > 100 || guess < 1) {
            cout << "Twoja liczba musi być z przedziału od 1 do 100!\n";
            return 0;
        }
        if (counter == 7 && answer != 'p')
        {
            cout << "\n\nDziwne, powinienem już ją odgadnąć!.\n";
            return 0;
        }
    }

    string s_try;
    if (counter == 1)
        s_try = " próbę ";
    else if (counter == 2 || counter == 3 || counter == 4)
        s_try = " próby ";
    else
        s_try = " prób ";
    cout << "\nPotrzebowałem " << counter << s_try << "aby odgadnąć Twoją liczbę!" << '\n';

    return 0;
}
