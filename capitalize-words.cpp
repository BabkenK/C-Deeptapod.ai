#include <iostream>
#include <string>
std::string capitalizefirstLetter(std::string text){
    for(int x=0; x<text.length(); ++x){
        if(x==0|| text[x-1]== ' '){
    text[x]=std::toupper(text[x]);
        }else{
            text[x]=std::tolower(text[x]);
            }
        }
        return text;
    }
    int main(){
    std::string str;
    std::cout<<"Enter your text: ";
    std::getline(std::cin, str);
    std::cout<<"Modified text: "<<capitalizefirstLetter(str)<<std::endl;
        return 0;
    }