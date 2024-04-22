#include <iostream>
#include <string>

void ExtractPostalAddresses(const std::string &text) {
    for (size_t i = 0; i < text.length() - 4; ++i) {
        if (std::isdigit(text[i]) && std::isdigit(text[i + 1]) &&
            std::isdigit(text[i + 2]) && std::isdigit(text[i + 3]) &&
            std::isdigit(text[i + 4])) {
            std::cout << "We have Postal address: " << text.substr(i, 5) << std::endl;
        }
    }
}

int main() {
    std::string str;
    std::cout << "Enter your text: ";
    std::getline(std::cin, str);
    
    ExtractPostalAddresses(str);
    
    return 0;
}
