#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; // Number of elements which make up the association table.
    cin >> n;
    cin.ignore();
    int q; // Number Q of file names to be analyzed.
    cin >> q;
    cin.ignore();

    // Map of file extensions and MIME types
    std::map<string, string> mime_map = {};

    for (int i = 0; i < n; i++)
    {
        string ext; // file extension
        string mt;  // MIME type.
        cin >> ext >> mt;
        cin.ignore();

        // Convert extension to lowercase
        transform(ext.begin(), ext.end(), ext.begin(), ::tolower);

        mime_map[ext] = mt;
    }

    for (int i = 0; i < q; i++)
    {
        string fname;
        getline(cin, fname); // One file name per line.

        // Find the last dot in the filename
        int dot_pos = fname.find_last_of('.');
        if (dot_pos != string::npos)
        {
            string ext = fname.substr(dot_pos + 1, fname.length());

            // Convert extension to lowercase
            transform(ext.begin(), ext.end(), ext.begin(), ::tolower);

            if (mime_map.find(ext) != mime_map.end())
            {
                cout << mime_map[ext] << endl;
                continue;
            }
            else
            {
                cout << "UNKNOWN" << endl;
            }
        }
        else
        {
            // No dots
            cout << "UNKNOWN" << endl;
        }
    }
}