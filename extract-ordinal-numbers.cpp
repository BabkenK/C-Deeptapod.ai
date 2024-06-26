#include <iostream>
#include <string>
#include <vector>
#include <regex>

std::vector<std::string> extract_ordinals(const std::string& text) {
    std::vector<std::string> ordinals;
    std::regex ordinals_regex("\\b(?:\\d+)(?:st|nd|rd|th)\\b", std::regex::icase);
    std::smatch match;

    std::string::const_iterator search_start(text.cbegin());
    while (std::regex_search(search_start, text.cend(), match, ordinals_regex)) {
        ordinals.push_back(match[0]);
        search_start = match.suffix().first;
    }
    return ordinals;
}

int main() {
    std::string text;
    std::cout << "Enter your text: ";
    std::getline(std::cin, text);

    std::vector<std::string> ordinals = extract_ordinals(text);

    std::cout << "Ordinal numbers in the text are:" << std::endl;
    for (const auto& ordinal : ordinals) {
        std::cout << ordinal << std::endl;
    }

    return 0;
}



