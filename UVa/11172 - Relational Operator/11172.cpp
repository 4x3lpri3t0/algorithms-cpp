#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    int n, m;
    while (T--)
    {
        cin >> n >> m;

        if (n < m)
            cout << "<\n";
        else if (n > m)
            cout << ">\n";
        else
            cout << "=\n";
    }
}