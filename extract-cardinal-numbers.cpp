#include <iostream>
#include <string>
#include <vector>
#include <regex>

std::vector<std::string> extract_cardinals(const std::string& text) {
    std::vector<std::string> cardinals;
    std::regex cardinals_regex("\\b(one|two|three|four|five|six)\\b", std::regex::icase);
    std::smatch match;

    std::string::const_iterator search_start(text.cbegin());
    while (std::regex_search(search_start, text.cend(), match, cardinals_regex)) {
        cardinals.push_back(match[0]);
        search_start = match.suffix().first;
    }
    return cardinals;
}

int main() {
    std::string text;
    std::cout << "Enter your text: ";
    std::getline(std::cin, text);

    std::vector<std::string> cardinals = extract_cardinals(text);

    std::cout << "Cardinal numbers in the text are:" << std::endl;
    for (const auto& cardinal : cardinals) {
        std::cout << cardinal << std::endl;
    }

    return 0;
}




