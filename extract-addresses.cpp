#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> ExtractPostalAddresses(const std::string &text) {
    std::vector<std::string> addresses; // Vector to store postal addresses

    for (size_t i = 0; i < text.length() - 4; ++i) {
        if (std::isdigit(text[i]) && std::isdigit(text[i + 1]) &&
            std::isdigit(text[i + 2]) && std::isdigit(text[i + 3]) &&
            std::isdigit(text[i + 4])) {
            addresses.push_back(text.substr(i, 5)); // Push the postal address into the vector
        }
    }

    return addresses; // Return the vector containing postal addresses
}

int main() {
    std::string str;
    std::cout << "Enter your text: ";
    std::getline(std::cin, str);
    
    std::vector<std::string> postalAddresses = ExtractPostalAddresses(str); // Extract postal addresses
    
    // Output the found postal addresses
    if (postalAddresses.empty()) {
        std::cout << "No postal addresses found." << std::endl;
    } else {
        std::cout << "Postal addresses found:" << std::endl;
        for (const auto& address : postalAddresses) {
            std::cout << address << std::endl;
        }
    }

    return 0;
}
