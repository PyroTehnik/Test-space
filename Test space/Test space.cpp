#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <locale.h>
#include <string>
using  namespace std;

int main()
{
    string ansver;
    vector<string>word;
    int counterW = 0;

    getline(cin, ansver);
    cout << "ansver.length: " << ansver.length() << '\n';


    for (int i = 0; i < ansver.length(); i++) {

        cout << "i " << i << '\n';
        cout << "counterW " << counterW << '\n';
        cout << "word.size " << word.size() << '\n';

        if (ansver[i] != ' ')
        {
            for (; isalnum(ansver[i]); i++)
            {
                if (counterW >= word.size())
                    word.push_back("");
                word[counterW].push_back({ ansver[i] });
            }
            counterW++;
        }
    }

    for (int i = 0; i < word.size(); i++)
    {
        cout << "Word " << i << ": " << word[i] << '\n';
    }
}