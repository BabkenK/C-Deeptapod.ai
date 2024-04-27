#include <iostream>
#include <string>
#include <vector>
#include <regex>

// Ֆունկցիա  դուրս բերելու համար cardinal թվերը տեքստից 
std::vector<std::string> extractcardinals(const std::string& text) {
    std::vector<std::string> cardinals; // Vector to store extracted cardinals
    std::regex cardinals_regex("\\b(one|two|three|four|five|six)\\b", std::regex::icase);
    // Կանոնավոր արտահայտություն կարդինալ թվերին համապատասխանելու համար (one, two, three, four, five, six)
    // std::regex::icase դրոշը հնարավորություն է տալիս մեծատառերի համար։
    std::smatch match; // Match object to hold information about the match
    std::string::const_iterator search_start(text.cbegin()); // Iterator տեքստի սկզբից որոնումը սկսելու համար նախատեսված
    while (std::regex_search(search_start, text.cend(), match, cardinals_regex)) {
        cardinals.push_back(match[0]); // ավելացնել համընկած cardinal թվերը to վեկտորում
        search_start = match.suffix().first;
    }
    return cardinals;  

int main() {
    std::string text;
    std::cout << "Enter your text: ";
    std::getline(std::cin, text); // Get user input text
    std::vector<std::string> cardinals = extractcardinals(text); 
    std::cout << "Cardinal numbers in the text are:" << std::endl;
    for (const auto& cardinal : cardinals) {
        std::cout << cardinal << std::endl; 
    }

    return 0;
}





