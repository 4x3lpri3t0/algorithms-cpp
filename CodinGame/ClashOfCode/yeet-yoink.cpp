#include <bits/stdc++.h>
using namespace std;

int main()
{
    string wishlist;
    getline(cin, wishlist); // The list containing the items to search for.
    int n;                  // The amount of items you will dig through.

    // Set of items to search for
    set<string> items = {};

    // Convert wishlist to lowercase
    transform(wishlist.begin(), wishlist.end(), wishlist.begin(), ::tolower);

    // Remove spaces from wishlist
    wishlist.erase(remove(wishlist.begin(), wishlist.end(), ' '), wishlist.end());

    int start = 0;
    // Split wishlist by comma
    for (int i = 0; i < wishlist.length(); i++)
    {
        if (wishlist[i] == ',')
        {
            items.insert(wishlist.substr(start, i - start));
            start = i + 1;
        }
    }

    // Add last item
    items.insert(wishlist.substr(start, wishlist.length() - start));

    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string item;
        getline(cin, item);

        // Convert item to lowercase
        transform(item.begin(), item.end(), item.begin(), ::tolower);

        // If set contains item:
        if (items.count(item))
        {
            cout << "YOINK" << endl;
        }
        else
        {
            cout << "YEET" << endl;
        }
    }
}