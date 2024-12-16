// https://www.codingame.com/ide/puzzle/winamax-battle
#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1

struct Card {
    unsigned value;
    char     color;

    Card(const string& p_input)
    {
        if (p_input.size() == 3)
        {
            value = 10;
            color = p_input[2];
        }
        else
        {
            if (isdigit(p_input[0]))
                value = p_input[0] - 48;
            else {
                switch (p_input[0])
                {
                case 'J': value = 11; break;
                case 'Q': value = 12; break;
                case 'K': value = 13; break;
                case 'A': value = 14; break;
                default:  value = 15; break;
                }
            }
            color = p_input[1];
        }
    }

    Card(const Card& p_other)
    {
        value = p_other.value;
        color = p_other.color;
    }

    bool operator<(const Card& p_other)
    {
        if (DEBUG && value < p_other.value)
            cerr << "(" << value << " < " << p_other.value << ")" << endl;
        return (value < p_other.value);
    }

    bool operator>(const Card& p_other)
    {
        if (DEBUG && value > p_other.value)
            cerr << "(" << value << " > " << p_other.value << ")" << endl;
        return (value > p_other.value);
    }
};

ostream& operator << (ostream& out, const Card& c)
{
    return (out << "(" << c.value << "," << c.color << ")" << endl);
}

int main()
{
    int n;          // Initial amount of cards (P1)
    int m;          // Initial amount of cards (P2)
    int turns = 0;  // turns in game

    list<Card> p1, p2;               // Initial player cards
    list<Card> p1_battle, p2_battle; // Cards curently in battle

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string cardp1; // P1 n cards
        cin >> cardp1;
        p1.push_back(Card(cardp1)); // Add card to player stack
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        string cardp2; // P2 m cards
        cin >> cardp2;
        p2.push_back(Card(cardp2)); // Add card to player stack
    }

    if (DEBUG)
    {
        cerr << " -- p1 cards -- " << endl;
        for (list<Card>::iterator it = p1.begin(); it != p1.end(); ++it) cerr << *it;
        cerr << " -- p2 cards -- " << endl;
        for (list<Card>::iterator it = p2.begin(); it != p2.end(); ++it) cerr << *it;
        cerr << " ------------- " << endl;
    }

    while (1) // Game loop
    {
        if (p1_battle.empty())
            ++turns;

        p1_battle.push_back(p1.front());
        p2_battle.push_back(p2.front());

        p1.pop_front();
        p2.pop_front();

        if (p1_battle.back() < p2_battle.back())            // P2 wins battle
        {
            p2.splice(p2.end(), p1_battle);
            p2.splice(p2.end(), p2_battle);

            if (p1.empty())
            {
                cout << 2 << " " << turns << endl;
                break;
            }
        }
        else if (p1_battle.back() > p2_battle.back())       // P1 wins battle
        {
            p1.splice(p1.end(), p1_battle);
            p1.splice(p1.end(), p2_battle);

            if (p2.empty())
            {
                cout << 1 << " " << turns << endl;
                break;
            }
        }
        else                                                // War!
        {
            if (DEBUG) cerr << "Battle!" << endl;
            if (p1.size() < 4 || p2.size() < 4)
            {
                cout << "PAT" << endl;
                break;
            }

            for (int i = 0; i < 3; ++i)
            {
                p1_battle.push_back(p1.front());
                p1.pop_front();

                p2_battle.push_back(p2.front());
                p2.pop_front();
            }
        }
    }
}