// https://onlinejudge.org/external/125/12577.pdf
#include <iostream>
using namespace std;

main()
{
    string inputString;
    int caseCounter = 0;
    while (cin >> inputString)
    {
        if (inputString == "*")
            break;
        cout << "Case " << ++caseCounter << ": ";
        if (inputString == "Hajj")
            cout << "Hajj-e-Akbar" << endl;
        else
            cout << "Hajj-e-Asghar" << endl;
    }
}