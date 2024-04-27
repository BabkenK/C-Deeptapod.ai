#include <iostream>
#include <string>

// Ձևակերպում ենք ֆունկցիա հաշվելու համար characters առանց բացատների
int countcharacterswithoutspace(const std::string& str) {
    int count = 0; //արժեքավորում ենք
    for (char c : str) {
        // եթե character չի հանդիսանում բացատ, increment ենք կատարում
        if (c != ' ') {
            count++;
        }
    }

    return count;
}
int main() {
    std::string str; // ձևակերպում ենք փոփոխական string
    std::cout << "Enter your text: ";
    std::getline(std::cin, str); // ստանում ենք օգտատիրոջ կողմից տեքստը

    // ֆունկցիաի կանչ ենք իրականացնում
    std::cout << "The total number of non-space characters is " << countcharacterswithoutspace(str) << std::endl;
    return 0;
}
