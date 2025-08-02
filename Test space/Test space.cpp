#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <locale.h>
#include <string>
using  namespace std;

void Calc()
{
    int a = 10;
    int b = 7;
    cout << "A = " << a << '\n';
    cout << "B = " << b << '\n';
    cout << "A + B = " << a + b << '\n';
    cout << "A - B = " << a - b << '\n';
    cout << "A * B = " << a * b << '\n';
    cout << "A / B = " << a / b << '\n';
}
void AgeC()
{
    int a;
    cout << "Enter age" << '\n';
    cin >> a;
    if (a >= 18) {
        cout << "Welcome";
    }
    else {
        cout << "Access denide";
    }
}
void RandomN()
{
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        int a;
        int b = rand() % (10 + 1);
        cout << "Enter number " << "(" << b << ")" << '\n';
        cin >> a;
        if (a == b) {
            cout << "You win" << '\n';
        }
        else {
            cout << "You lose" << '\n';
            return;
        }
    }
}
void RPS()
{
    srand(time(0));
    for (int i = 0; i < 3; i++)
    {
        //create array weapon
        string weapon[] = { "rock","paper","scissors" };

        // create results
        string result[3][3]{
            {"draw","win","lose"},
            {"lose","draw","win"},
            {"win","lose","draw"}
        };

        string userStr;
        int user = -1;
        int enemy = rand() % 2;
        cout << "Choise weapon (rock,paper,scissors) " << "(" << weapon[enemy] << ")" << '\n';
        cin >> userStr;

        // selection check & assigment "user" value on which was confirmed choice
        bool correct = false;
        for (int i = 0; i < 3; i++)
        {
            if (userStr == weapon[i]) {
                correct = true;
                user = i;
            }
        }

        //if the selection check is not confirmed
        if (!correct) {
            cout << "Error. Choise correct weapon " << '\n';
        }
        else
        {
            //appeal to string result to choose the result
            cout << result[enemy][user] << '\n';
        }
    }
}
void Store()
{
    struct product {
        string name;
        int price;
        int quantity;
    };

    vector<product>shop;
    shop.push_back({ "banana",10,9 });
    shop.push_back({ "apple",8,7 });
    shop.push_back({ "lemon",6,5 });

    cout << "How much money do you have?" << '\n';
    int money;
    cin >> money;

    //MaxQP()
    cout << "maximum quantity of products for youre money is:" << '\n';
    int c = 0;
    int minPrice = money;
    for (int m = 0; money >= minPrice; m++) {
        int i = 0;
        int minBuy = 0;
        minPrice = money;
        --minPrice;
        for (int i = 0; i < shop.size(); i++) {
            if (minPrice >= shop[i].price && shop[i].quantity != 0) {
                minPrice = shop[i].price;
                c = i;
            }
        }
        if (shop[c].quantity != 0) {
            for (; money >= minPrice && shop[c].quantity != 0;) {
                if (money >= minPrice) {
                    money -= minPrice;
                    shop[c].quantity -= 1;
                    minBuy += 1;
                }
            }
        }
        if (shop[c].quantity == 0) {
            shop[c].price = 100; // щрнр йняршкэ лме наньекяъ онкнлюмшл люцюгхмнл цде бяе жеммхйх = 100
        }
        if (minBuy != 0) {
            cout << shop[c].name << " " << minBuy << '\n';
        }
        if (money < minPrice || minBuy == 0) {
            cout << "remainder of youre money: " << money << '\n';
            break;
        }
    }

    /*

    cout << "Shopping list for maximum spending money:" << '\n';
    for (int a = 0; a < 3; a++)
    {;
    cout << "max: " << *max_element(begin(shop[a].price), end(shop[a].price)) << '\n';
    }
    {
        int maxwell = -1;
        for (int a = 0; a < shop.size(); a++)
        {
            maxwell = max(shop[a].price, maxwell);
        }
        cout << "max price is: " << maxwell << endl;
        }

    cout << "Maximum quantity purchase list" << '\n';*/

    for (int i = 0; i < shop.size(); i++) {
        cout << i + 1 << " " << shop[i].name << " price " << shop[i].price << " quantity " << shop[i].quantity << '\n';
    }

    int prod = 0;
    int buyw = 1;
    string want;

    for (int buy = 0; buy < buyw; buy++) {
        cout << "what u want buy?" << '\n';
        cin >> want;
        int take;
        cout << "how much u want take" << '\n';
        cin >> take;

        bool corr1 = false;
        bool corr2 = false;
        bool corr3 = false;
        for (int i1 = 0; i1 < shop.size(); i1++) {
            if (want == shop[i1].name) {
                corr1 = true;
                prod = i1;
            }
            if (take <= shop[prod].quantity) {
                corr2 = true;
            }
            if (money >= shop[prod].price * take) {
                corr3 = true;
            }
        }
        if (!corr1) {
            cout << "wrong name" << '\n';
        }
        if (!corr2) {
            cout << "wrong quantity" << '\n';
        }
        if (!corr3) {
            cout << "wrong money" << '\n';
        }
        money -= shop[prod].price * take;

        cout << "u buy " << take << " things " << want << " for " << shop[prod].price * take << '\n';
        cout << "remaining money " << money << '\n';

        string answer;
        cout << "u want buy more? y/n" << '\n';
        cin >> answer;
        if (answer == "y") {
            buyw += 1;
        }
        else {
            return;
        }
    }
}
void RPG();

int main()
{
    cout << "a";
}

