// https://onlinejudge.org/external/1/119.pdf
#include <bits/stdc++.h>
using namespace std;

int main()
{
    size_t N;
    bool firstCase = true;
    while (cin >> N)
    {
        map<string, int> balance;
        vector<string> names(N);

        for (size_t i = 0; i < N; i++)
        {
            cin >> names[i];
            balance[names[i]] = 0; // Init
        }

        for (size_t i = 0; i < N; i++)
        {
            string name;
            cin >> name;
            int spentMoney, nPeople;
            cin >> spentMoney >> nPeople;

            if (nPeople > 0)
            {
                int gift = spentMoney / nPeople;
                balance[name] -= gift * nPeople;
                for (size_t j = 0; j < nPeople; j++)
                {
                    cin >> name;
                    balance[name] += gift;
                }
            }
        }

        if (!firstCase)
            cout << endl;
        firstCase = false;

        for (const auto &name : names)
        {
            cout << name << " " << balance[name] << endl;
        }
    }

    return 0;
}