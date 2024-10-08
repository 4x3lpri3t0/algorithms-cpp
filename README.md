# algorithms-cpp

## Disclaimer

This repository serves as a personal space for experimentation and practice, and it is not representative of my professional coding standards. It primarily houses solutions to math problems, algorithms, and competitive programming exercises that I use to enhance my problem-solving capabilities.

In this context, I prioritize developer speed and efficiency over strict adherence to certain best practices, such as meaningful variable naming, function reusability, and code modularity. For instance, in competitive programming, it is common to use concise variable names like `TC` or `n` instead of more descriptive ones like `testCases` or `numberOfX`. These solutions are not intended to be production-ready; rather, they are part of my ongoing journey to hone my problem-solving skills. In actual professional software development, I recognize and adhere to industry-standard practices for maintaining clean, efficient, and maintainable code.

**Do NOT use `#include <bits/stdc++.h>` in production!** This directive is an optimization meant solely for competitive programming contests, designed to save developer time at the expense of a negligible increase in compilation time. It includes ALL C++ STL libraries, which you most likely do NOT want. Additionally, it is specific to GCC and may not be available on other C++ compilers. In production environments, maintaining control over the libraries you include is crucial for clarity, performance, and maintainability.

The use of `#define int long long` is also a poor practice that should not be applied in production.

## Review

### 1300s
* A_Cut_Ribbon -> DP
* A_Party -> DFS, Graph
* B_Dreamoon_and_WiFi -> Combinatorics
* B_Vitamins -> Comb/Implementation
* B_Vanya_and_Books -> Math

### 1400s
* A_Vacations -> DP
* B_Complete_the_Word -> Greedy, two pointers
* B_Litte_Girl_and_Game -> Games/Greedy/Char manipulation
* C_Given_Length_and_Sum_of_Digits -> Greedy

## Tricks

### Output to output.txt
To redirect the standard input and output streams from your program into a file named `output.txt` (works for both `cout` and `printf`):
```cpp
int main()
{
    std::streambuf *coutbuf = std::cout.rdbuf();    // Save old buffer
    char* tempFileName = "output.txt";
    std::ofstream out(tempFileName);
    std::cout.rdbuf(out.rdbuf());                   // Redirect std::cout to file
    freopen(tempFileName, "w", stdout);             // Redirect stdout to file

    // ...
    // (Your program here)
    // ...

    std::cout.rdbuf(coutbuf);                       // Restore the original buffer
    freopen("/dev/tty", "w", stdout);               // Restore stdout to the console
}
```

### Join vector
```cpp
void print_vector(vector<int> v)
{
    stringstream ss;
    for (int i = 0; i < v.size(); i++)
    {
        if (i != 0)
            ss << " ";
        ss << v[i];
    }
    cout << ss.str();
}
```

### Init array zeroes
```cpp
memset(a, 0, sizeof(a));
```

### Init bool array (set all elements `false`)
```cpp
bool myBoolArray[ARRAY_SIZE] = { 0 };
```

### Read string array (e.g. A_Where_Are_My_Flakes.cpp)
```cpp
string s, t;
int k;
cin >> s >> s >> t >> s >> k; // We're only interested in t and k
```

### Read string array with unknown amount of words (e.g. 11586_Train-Tracks.cpp)
```cpp
int N;
scanf("%d", &N);
getchar();
while (N--)
{
    string s;
    getline(cin, s); // e.g. MM FF MF FM
    int len = s.size(); // Unknown length of string array
    for (int i = 0; i < len; i++)
    {
        // DO STUFF ...
```

### Read TestCases until TC is 0
```cpp
int TC;
while (cin >> TC, TC != 0)
{
    string S;
    cin >> S;
    // DO STUFF ...
```

### Read int array ('readintarr')
```cpp
int a[n];
for (int i = 0; i < n; i++)
{
	cin >> a[i];
}
```

### Get index of char in string
```cpp
int idx = str.find(c);
if (idx != string::npos)
	cout << "Found";
```

### Sort array
```cpp
sort(a, a + SIZE); // (Start at the array, and sort up to the last element in the array)
```

### Sort vector/string ASC
```cpp
sort(S.begin(), S.end());
```

### Sort vector/string DESC
```cpp
sort(S.begin(), S.end(), greater<int>());
```

## Config

### Launch

`launch.json`
```json
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "(gdb) Launch",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}\\${fileBasenameNoExtension}.exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${fileDirname}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "gdb",
            "miDebuggerPath": "C:\\msys64\\mingw64\\bin\\gdb.exe",
            "setupCommands": [
                {
                    "description": "Enable pretty-printing for gdb",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ],
            "preLaunchTask": "C/C++: g++.exe build active file"
        }
    ]
}
```

### Tasks

`tasks.json`
```json
{
	"tasks": [{
		"type": "cppbuild",
		"label": "C/C++: g++.exe build active file",
		"command": "C:\\msys64\\mingw64\\bin\\g++.exe",
		"args": [
			"-fdiagnostics-color=always",
			"-g",
			"${file}",
			"-o",
			"${fileDirname}\\${fileBasenameNoExtension}.exe"
		],
		"options": {
			"cwd": "${fileDirname}"
		},
		"problemMatcher": [
			"$gcc"
		],
		"group": {
		"kind": "build",
		"isDefault": true
		},
		"detail": "Task generated by Debugger."
	}],
	"version": "2.0.0"
}
```

### Settings

`settings.json`
```jsonc
{
  "code-runner.executorMap": {
    "javascript": "nodejs",
    "java": "cd $dir && javac $fileName && java $fileNameWithoutExt",
    "c": "cd $dir && gcc -g \"$fileName\" -o \"$fileNameWithoutExt\" && $dir\"$fileNameWithoutExt\"",
    "cpp": "cd $dir && g++ -g \"$fileName\" -o \"$fileNameWithoutExt\" && $dir\"'$fileNameWithoutExt\"'",
    "objective-c": "cd $dir && gcc -framework Cocoa $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
    "php": "php",
    "python": "python3",
    "perl": "perl",
    "ruby": "ruby",
    "go": "go run",
    "lua": "lua",
    "groovy": "groovy",
    "powershell": "powershell -ExecutionPolicy ByPass -File",
    "bat": "cmd /c",
    "shellscript": "bash",
    "fsharp": "fsi",
    "csharp": "scriptcs",
    "vbscript": "cscript //Nologo",
    "typescript": "ts-node",
    "coffeescript": "coffee",
    "scala": "scala",
    "swift": "swift",
    "julia": "julia",
    "crystal": "crystal",
    "ocaml": "ocaml",
    "r": "Rscript",
    "applescript": "osascript",
    "clojure": "lein exec",
    "haxe": "haxe --cwd $dirWithoutTrailingSlash --run $fileNameWithoutExt",
    "rust": "cd $dir && rustc $fileName && $dir$fileNameWithoutExt",
    "racket": "racket",
    "ahk": "autohotkey",
    "autoit": "autoit3",
    "kotlin": "cd $dir && kotlinc $fileName -include-runtime -d $fileNameWithoutExt.jar && java -jar $fileNameWithoutExt.jar",
    "dart": "dart",
    "pascal": "cd $dir && fpc $fileName && $dir$fileNameWithoutExt",
    "d": "cd $dir && dmd $fileName && $dir$fileNameWithoutExt",
    "haskell": "runhaskell",
    "nim": "nim compile --verbosity:0 --hints:off --run"
  },
  "files.associations": {
    "xstring": "cpp",
    "iostream": "cpp",
    "xtree": "cpp",
    "string_view": "cpp",
    "vector": "cpp",
    "span": "cpp",
    "type_traits": "cpp",
    "any": "cpp",
    "array": "cpp",
    "atomic": "cpp",
    "barrier": "cpp",
    "bit": "cpp",
    "*.tcc": "cpp",
    "bitset": "cpp",
    "cctype": "cpp",
    "cfenv": "cpp",
    "charconv": "cpp",
    "chrono": "cpp",
    "cinttypes": "cpp",
    "clocale": "cpp",
    "cmath": "cpp",
    "codecvt": "cpp",
    "compare": "cpp",
    "complex": "cpp",
    "concepts": "cpp",
    "condition_variable": "cpp",
    "coroutine": "cpp",
    "csetjmp": "cpp",
    "csignal": "cpp",
    "cstdarg": "cpp",
    "cstddef": "cpp",
    "cstdint": "cpp",
    "cstdio": "cpp",
    "cstdlib": "cpp",
    "cstring": "cpp",
    "ctime": "cpp",
    "cuchar": "cpp",
    "cwchar": "cpp",
    "cwctype": "cpp",
    "deque": "cpp",
    "forward_list": "cpp",
    "list": "cpp",
    "map": "cpp",
    "set": "cpp",
    "string": "cpp",
    "unordered_map": "cpp",
    "unordered_set": "cpp",
    "exception": "cpp",
    "expected": "cpp",
    "algorithm": "cpp",
    "functional": "cpp",
    "iterator": "cpp",
    "memory": "cpp",
    "memory_resource": "cpp",
    "numeric": "cpp",
    "optional": "cpp",
    "random": "cpp",
    "ratio": "cpp",
    "regex": "cpp",
    "source_location": "cpp",
    "system_error": "cpp",
    "tuple": "cpp",
    "utility": "cpp",
    "fstream": "cpp",
    "future": "cpp",
    "initializer_list": "cpp",
    "iomanip": "cpp",
    "iosfwd": "cpp",
    "istream": "cpp",
    "latch": "cpp",
    "limits": "cpp",
    "mutex": "cpp",
    "new": "cpp",
    "numbers": "cpp",
    "ostream": "cpp",
    "ranges": "cpp",
    "scoped_allocator": "cpp",
    "semaphore": "cpp",
    "shared_mutex": "cpp",
    "spanstream": "cpp",
    "sstream": "cpp",
    "stacktrace": "cpp",
    "stdexcept": "cpp",
    "stop_token": "cpp",
    "streambuf": "cpp",
    "syncstream": "cpp",
    "thread": "cpp",
    "typeindex": "cpp",
    "typeinfo": "cpp",
    "valarray": "cpp",
    "variant": "cpp"
  }
}
```

### CPP Properties

`c_cpp_properties.json`
```jsonc
{
    "configurations": [
        {
            "name": "Win32",
            "includePath": [
                "${workspaceFolder}/**"
            ],
            "defines": [
                "_DEBUG",
                "UNICODE",
                "_UNICODE"
            ],
            "windowsSdkVersion": "10.0.22621.0",
            "cStandard": "c17",
            "cppStandard": "c++17",
            "intelliSenseMode": "windows-msvc-x64",
            "configurationProvider": "ms-vscode.makefile-tools"
        }
    ],
    "version": 4
}
```

### Snippets

#### Settings > User Snippets > `cpp.json`

```json
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
			"// ${1}",
			"#include <bits/stdc++.h>",
			"#define int long long",
			"using namespace std;",
			"",
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
```
