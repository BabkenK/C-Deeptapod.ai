#include <iostream>
#include <string>
#include <vector>
#include <regex>

std::vector<std::string> extract_currency_symbols(const std::string& text, const std::string& symbols_to_extract) {
    std::vector<std::string> symbols;
    std::regex currency_regex("[" + symbols_to_extract + "]");
    std::smatch match;

    std::string::const_iterator search_start(text.cbegin());
    while (std::regex_search(search_start, text.cend(), match, currency_regex)) {
        symbols.push_back(match[0]);
        search_start = match.suffix().first;
    }
    return symbols;
}

int main() {
    std::string text;
    std::cout << "Enter your text: ";
    std::getline(std::cin, text);

    std::string symbols_to_extract;
    std::cout << "Enter the symbols you want to extract: ";
    std::getline(std::cin, symbols_to_extract);

    std::vector<std::string> symbols = extract_currency_symbols(text, symbols_to_extract);

    std::cout << "Currency symbols in the text are:" << std::endl;
    for (const auto& symbol : symbols) {
        std::cout << symbol << std::endl;
    }

    return 0;
}





