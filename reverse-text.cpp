#include <algorithm>
#include <iostream>
#include <string>

int main(){
std::string str = " enter your text";
std::getline(std::cin, str);
std::reverse(str.begin(), str.end());
std::cout<<"\nYour reversed text\n"<<str<<std::endl;
return 0;
}
