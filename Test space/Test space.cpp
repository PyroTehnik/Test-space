#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string ansver;
    std::vector<std::string>word;
    int a = 0;

    std::getline(std::cin, ansver);
    std::cout << ansver.length() << '\n';

    for (int i = 0; i < ansver.length(); i++) {
        if (ansver[i] == ' ') {
            a = a+1;
            continue;
        }
        else {
            if (a >= word.size()) word.push_back("");
           

            word[a].push_back({ansver[i]});
            
            
        }
        

    }
    for (int i = 0; i < word.size(); i++)
    {
        std::cout << word[i] << '\n';
    }

    //for (int i = word1.length() + 1; i < ansver.length(); i++) {

    //    if (ansver[i] == ' ') {
    //        break;
    //    }
    //    else {
    //        word2 += ansver[i];
    //    }
    //    std::cout << word2 << '\n';
    //}
}