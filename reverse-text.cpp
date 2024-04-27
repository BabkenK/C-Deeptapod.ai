#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

std::string reverse_string(const std::string& str) {
    std::vector<char> reversed_chars;
    
    // Iterate over the characters of the string in reverse order
    for (auto it = str.rbegin(); it != str.rend(); ++it) {
        reversed_chars.push_back(*it); // Push each character into the vector
    }

    // Construct a new string from the reversed vector
    return std::string(reversed_chars.begin(), reversed_chars.end());
}

int main() {
    std::string str;
    std::cout << "Enter your text: ";
    std::getline(std::cin, str);

    std::string reversed_text = reverse_string(str);

    std::cout << "\nYour reversed text\n" << reversed_text << std::endl;

    return 0;
}
