#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<int> numbers;
    for (int i = 0; i < n; i++)
    {
        int pi;
        cin >> pi;
        numbers.push_back(pi);
        cin.ignore();
    }

    // Sort the list of numbers:
    sort(numbers.begin(), numbers.end());

    // Find the smallest difference between two numbers:
    int smallestDifference = INT_MAX;
    for (int i = 0; i < numbers.size() - 1; i++)
    {
        int difference = numbers[i + 1] - numbers[i];
        if (difference < smallestDifference)
        {
            smallestDifference = difference;
        }
    }

    cout << smallestDifference << endl;
}