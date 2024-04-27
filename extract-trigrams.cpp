//Հերթական բառերի եռապատիկ հանելը նշանակում է գտնել երեք բառի հաջորդականություն տվյալ տեքստում,
որտեղ յուրաքանչյուր բառ հայտնվում է մեկը մյուսի հետևից առանց ընդհատումների:

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

std::vector<std::string> extract_trigrams(const std::string & text) {
    std::vector<std::string> trigrams;
    std::istringstream iss(text);
    std::string word1, word2, word3;

    iss >> word1;
    iss >> word2;

    while (iss >> word3) {
        trigrams.push_back(word1 + " " + word2 + " " + word3);
        word1 = word2;
        word2 = word3;
    }

    return trigrams;
}

int main() {
    std::string text;
    std::cout << "Enter the text: ";
    std::getline(std::cin, text);
    std::vector<std::string> trigrams = extract_trigrams(text);

    // Print the trigrams
    std::cout << "Trigrams:" << std::endl;
    for (const auto& trigram : trigrams) {
        std::cout << trigram << std::endl;
    }

    return 0;
}



