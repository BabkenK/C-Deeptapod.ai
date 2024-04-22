#include <iostream>
#include <string>

char *removeDuplicate(char str[], int n) {
    int index = -1;
    for (int i = 0; i < n; ++i) {
        int j;
        for (j = 0; j < index; ++j) {
            if (str[i] == str[j]) {
                break;
            }
        }
        if (j == index) {
            str[++index] = str[i];
        }
    }
    str[++index] = '\0';
    return str;
}

int main() {
    std::string str;
    std::cout << "Enter your text: ";
    std::getline(std::cin, str);
    
    char charArray[str.length() + 1];
    std::copy(str.begin(), str.end(), charArray);
    charArray[str.length()] = '\0';

    int n = str.length();
    std::cout << "String after removing duplicates: " << removeDuplicate(charArray, n) << std::endl;
    return 0;
}