// https://onlinejudge.org/external/9/978.pdf
#include <bits/stdc++.h>

using namespace std;

typedef multiset<int, greater<int>> mseti;
typedef multiset<int, greater<int>>::iterator msetiiter;

main(void)
{
    int TC;
    cin >> TC;

    while (TC--)
    {
        // Input
        int B, SG, SB;
        cin >> B >> SG >> SB;
        mseti greenPower;
        for (int i = 0; i < SG; ++i)
        {
            int power;
            cin >> power;
            greenPower.insert(power);
        }
        mseti bluePower;
        for (int i = 0; i < SB; ++i)
        {
            int power;
            cin >> power;
            bluePower.insert(power);
        }

        // Compute
        while (!bluePower.empty() && !greenPower.empty())
        {
            queue<int> blueFighters;
            queue<int> greenFighters;
            int minSize = min(B, (int)min(bluePower.size(), greenPower.size()));

            for (int i = 0; i < minSize; ++i)
            {
                msetiiter b = bluePower.begin();
                msetiiter g = greenPower.begin();

                blueFighters.push(*b);
                greenFighters.push(*g);

                bluePower.erase(b);
                greenPower.erase(g);
            }

            for (int i = 0; i < minSize; ++i)
            {
                int b = blueFighters.front();
                int g = greenFighters.front();

                blueFighters.pop();
                greenFighters.pop();

                if (b == g)
                    continue;
                if (b < g)
                    greenPower.insert(g - b);
                else
                    bluePower.insert(b - g);
            }
        }

        // Output
        if (bluePower.empty() && greenPower.empty())
        {
            cout << "green and blue died\n";
            if (TC)
                cout << "\n";
            continue;
        }

        msetiiter begin;
        msetiiter end;
        if (bluePower.empty())
        {
            cout << "green wins\n";

            begin = greenPower.begin();
            end = greenPower.end();
        }
        else
        {
            cout << "blue wins\n";

            begin = bluePower.begin();
            end = bluePower.end();
        }

        for (msetiiter i = begin; i != end; ++i)
            cout << *i << "\n";
        if (TC)
            cout << "\n";
    }
}