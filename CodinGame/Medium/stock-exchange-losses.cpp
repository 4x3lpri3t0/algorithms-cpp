#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int min = 0, prev = 0, max = 0;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        cin.ignore();

        max = std::max(max, v);
        int diff = v - max;
        min = std::min(min, diff);
        prev = v;
    }

    cout << min << endl;
}