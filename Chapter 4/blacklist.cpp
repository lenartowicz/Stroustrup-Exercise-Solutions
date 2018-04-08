#include "../std_lib_facilities.h"

int main()
{
    vector<string> banned(3);
        banned[0] = "fuck";
        banned[1] = "shit";
        banned[2] = "wuss";

    vector<string> words;
    string word;

    while (cin >> word)
        words.push_back(word);

    cout << '\n';

    for (int i = 0; i < words.size(); ++i)
    {
        for (int j = 0; j < banned.size(); ++j)
            if (words[i] == banned[j])
                words[i] = "<censored>";

        cout << words[i] << " ";
    }

    cout << '\n';

    return 0;
}
