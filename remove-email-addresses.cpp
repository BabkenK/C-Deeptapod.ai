#include <iostream>
#include <string>
#include <regex>
#include <vector>

std::vector<std::string> extract_email_addresses(const std::string& text) {
    std::vector<std::string> emails; // Vector to store extracted email addresses
    std::regex email_regex(R"([\w\.-]+@[\w\.-]+\.\w+)");
    
    // Iterate over matches using regex_iterator
    std::regex_iterator<std::string::const_iterator> iter(text.begin(), text.end(), email_regex);
    std::regex_iterator<std::string::const_iterator> end;

    while (iter != end) {
        emails.push_back(iter->str()); // Store the matched email address
        ++iter;
    }
    
    return emails;
}

int main() {
    std::string text;
    std::cout << "Enter your text: ";
    std::getline(std::cin, text);

    std::vector<std::string> email_addresses = extract_email_addresses(text);

    std::cout << "Email addresses in the text are:" << std::endl;
    for (const auto& email : email_addresses) {
        std::cout << email << std::endl;
    }

    return 0;
}
