// https://www.codingame.com/ide/puzzle/ascii-art
#include <iostream>
#include <algorithm>
#include <string>
#include <limits>
#include <cctype>

int main() {
  int width, height;
  std::cin >> width >> height;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

  std::string text;
  std::getline(std::cin, text);
  
  // Convert text to upper case using a simpler, locale-independent method
  std::transform(text.begin(), text.end(), text.begin(),
                 [](char c) { return std::toupper(static_cast<unsigned char>(c)); });

  for (int i = 0; i < height; i++) {
    std::string row;
    std::getline(std::cin, row);
    std::string output;
    output.reserve(text.length() * width);

    for (char c : text) {
      if (!std::isalpha(static_cast<unsigned char>(c))) {
        c = '?'; // Default to '?' for non-alphabet characters
      }
      
      int position = std::toupper(static_cast<unsigned char>(c)) - 'A';
      if (position < 0 || position >= 26) {
        position = 26; // Handle non-alphabetic characters
      }

      int start = position * width;
      output += row.substr(start, width);
    }

    std::cout << output << '\n';
  }
}