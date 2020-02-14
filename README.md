# algorithms-cpp

## Review

### 1300s
* A_Party -> DFS, Graph
* B_Dreamoon_and_WiFi -> Combinatorics
* B_Vitamins -> Comb/Implementation
* B_Vanya_and_Books -> Math

## Tricks

### Read string array (e.g. A_Where_Are_My_Flakes)
string s, t;
int k;
cin >> s >> s >> t >> s >> k; // We're only interested in t and k

### Read int array ('readintarr')
int a[n];
for (int i = 0; i < n; i++)
{
	cin >> a[i];
}

### Get index of char in string
int idx = str.find(c);
if (idx != string::npos)
	cout << "Found";

### Sort array
sort(a, a + SIZE); // (Start at the array, and sort up to the last element in the array)

### Sort vector/string ASC
sort(S.begin(), S.end());

### Sort vector/string DESC
sort(S.begin(), S.end(), greater<int>());

## Snippets

### Settings > User Snippets > cpp.json

{
	"Competitive Programming - Read Int Array": {
		"prefix": [
			"readintarr",
			"intarrread"
		],
		"body": [
			"int ${1:a}[${2:n}];",
			"for (int i = 0; i < ${2:n}; i++)",
			"    cin >> ${1:a}[i];",
            "",
			"$0"
		],
		"description": "Competitive Programming template."
	},
	"Competitive Programming - Read Vector": {
		"prefix": [
			"readvector",
			"vectorread"
		],
		"body": [
			"int input;",
			"vector<int> a;",
			"while (cin >> input)",
			"    a.push_back(input);",
            "",
			"$0"
		],
		"description": "Competitive Programming template."
	},
	"Competitive Programming - Main": {
		"prefix": [
			"maincp",
			"cpmain"
		],
		"body": [
			"#include <bits/stdc++.h>",
			"#define int long long",
			"using namespace std;",
			"",
			"// ${1}",
			"int32_t main()",
			"{",
			"\tios::sync_with_stdio(0);",
			"\tint ${2:n}, ${3:k};",
			"\tcin >> ${2:n} >> ${3:k};",
			"\t",
			"\t$0",
			"\t",
			"\tcout << 0;",
			"}"
		],
		"description": "Competitive Programming template."
	}
	// Place your snippets for cpp here. Each snippet is defined under a snippet name and has a prefix, body and 
	// description. The prefix is what is used to trigger the snippet and the body will be expanded and inserted. Possible variables are:
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. Placeholders with the 
	// same ids are connected.
	// Example:
	// "Print to console": {
	// 	"prefix": "log",
	// 	"body": [
	// 		"console.log('$1');",
	// 		"$2"
	// 	],
	// 	"description": "Log output to console"
	// }
}