// https://onlinejudge.org/external/101/10141.pdf
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, n;
    string x;
    int count = 0;

    while (cin >> r >> n, r || n)
    {
        count++;

        double price = 2000000000, p;
        int reqMet = -1, currReqMet;
        string nameBest, currName;

        for (int i = 0; i < r; i++)
        {
            cin.ignore();
            getline(cin, x);
        }

        while (n--)
        {
            getline(cin, currName);
            scanf("%lf %d\n", &p, &currReqMet);
            if (currReqMet > reqMet)
            {
                reqMet = currReqMet;
                nameBest = currName;
                price = p;
            }
            else if (currReqMet == reqMet && p < price)
            {
                reqMet = currReqMet;
                nameBest = currName;
                price = p;
            }

            for (int i = 0; i < currReqMet; i++)
            {
                getline(cin, x);
            }
        }

        if (count > 1)
            cout << endl;
        cout << "RFP #" << count << endl;
        cout << nameBest << endl;
    }

    return 0;
}