#include <iostream>
#include <string>

int main()
{
    std::string ansver;
    std::string word1;
    std::string word2;
    std::string word3;

    std::getline(std::cin, ansver);
    std::cout << ansver.length() << '\n';

    for (int i = 0; i < ansver.length(); i++) {

        if (ansver[i] == ' ') {
            break;
        }
        else {
            word1 += ansver[i];
        }
        std::cout << word1 << '\n';

    }
    for (int i = word1.length() + 1; i < ansver.length(); i++) {

        if (ansver[i] == ' ') {
            break;
        }
        else {
            word2 += ansver[i];
        }
        std::cout << word2 << '\n';
    }
}