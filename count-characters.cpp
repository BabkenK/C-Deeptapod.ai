#include <iostream>

int main(){
std::string str = " enter your text";
std::getline(std::cin, str);
std::cout<<" The total number of characters is "<<str.size()<<std::endl;
return 0;
}
