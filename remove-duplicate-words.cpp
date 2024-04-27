#include <iostream>
#include <string>
#include <set> // Include the set library

std::string removeDuplicate(const std::string& str) {
    std::set<char> uniqueChars; // ստեղծել set պահելու համար ունիկալ characters
    for (char ch : str) {
        uniqueChars.insert(ch); //Տեղադրեք յուրաքանչյուր նիշ insert-ի մեջ
    }

    // Ստեղծեք նոր տող   unique characters-ով   set-ի մեջ
    std::string result;
    for (char ch : uniqueChars) {
        result += ch;
    }
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter your text: ";
    std::getline(std::cin, str);

    std::string result = removeDuplicate(str);
    
    std::cout << "String after removing duplicates: " << result << std::endl;
    return 0;
}
