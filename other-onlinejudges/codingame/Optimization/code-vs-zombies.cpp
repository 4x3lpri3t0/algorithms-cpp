// TODO

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Save humans, destroy zombies!
 **/

int main()
{
    // Game loop
    while (1) {
        int x;
        int y;
        cin >> x >> y; cin.ignore();
        
        int human_count;
        cin >> human_count; cin.ignore();
        for (int i = 0; i < human_count; i++) {
            int human_id;
            int human_x;
            int human_y;
            cin >> human_id >> human_x >> human_y; cin.ignore();
        }

        int zombie_count;
        cin >> zombie_count; cin.ignore();
        for (int i = 0; i < zombie_count; i++) {
            int zombie_id;
            int zombie_x;
            int zombie_y;
            int zombie_xnext;
            int zombie_ynext;
            cin >> zombie_id >> zombie_x >> zombie_y >> zombie_xnext >> zombie_ynext; cin.ignore();
        }

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        cout << "0 0" << endl; // Your destination coordinates
    }
}