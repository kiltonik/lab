#include "utils.h"

Utils::Utils() {}

bool Utils::stringInEnglish(std::string string){
    for(char& a : string){
        if(a > 'z' || a < 'a') return false;
    }
    return true;
}

bool Utils::stringInEnglishWithSpaces(std::string string){
    for(char& a : string){
        if((a > 'z' || a < 'a') && a != ' ') return false;
    }
    return true;
}
