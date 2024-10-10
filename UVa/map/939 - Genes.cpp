// https://onlinejudge.org/external/9/939.pdf
#include <bits/stdc++.h>
using namespace std;

// Mapping from names to gene statuses and parent-child relationships
map<string, string> nameToGene;
unordered_map<string, vector<string>> parents;

// Recursive function to determine the gene status of a child based on parents
void dfs(const string &child)
{
    // If gene status is already known, return
    if (nameToGene.count(child))
        return;

    // Recursively evaluate parents
    for (const auto &parent : parents[child])
        dfs(parent);

    // Determine the gene status based on parent's traits
    string trait1 = nameToGene[parents[child][0]];
    string trait2 = nameToGene[parents[child][1]];
    if (trait1 == "recessive" && trait2 == "recessive")
        nameToGene[child] = "recessive";
    else if (trait1 == "dominant" || trait2 == "dominant")
        nameToGene[child] = (trait1 == "non-existent" || trait2 == "non-existent") ? "recessive" : "dominant";
    else
        nameToGene[child] = "non-existent";
}

main()
{
    int p;
    string str1, str2;

    // Input processing
    cin >> p;
    while (p--)
    {
        cin >> str1 >> str2;
        // If the gene status is known, store it; otherwise, store parent-child relationship
        if (str2 == "dominant" || str2 == "recessive" || str2 == "non-existent")
            nameToGene[str1] = str2;
        else
            parents[str2].push_back(str1);
    }

    // Compute gene statuses for all children
    for (const auto &entry : parents)
        dfs(entry.first);

    // Output results sorted by name
    vector<pair<string, string>> results(nameToGene.begin(), nameToGene.end());
    sort(results.begin(), results.end());
    for (const auto &result : results)
        cout << result.first << " " << result.second << endl;
}