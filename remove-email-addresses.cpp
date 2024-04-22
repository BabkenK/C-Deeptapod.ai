#include <iostream>
#include <string>
#include <regex>

std::string remove_email_addresses(const std::string& text) {
    std::regex email_regex(R"([\w\.-]+@[\w\.-]+\.\w+)");
    
    return std::regex_replace(text, email_regex, "");
}

int main() {
    std::string text;
    std::cout << "Enter your text: ";
    std::getline(std::cin, text);

    std::string text_without_emails = remove_email_addresses(text);

    std::cout << "Text without email addresses:" << std::endl;
    std::cout << text_without_emails << std::endl;

    return 0;
}






