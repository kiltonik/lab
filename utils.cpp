#include "utils.h"
#include "regex"

using namespace std;

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

bool Utils::date_in_mmm_yy(string date){
    if(regex_match(
                date.begin(),
                date.end(),
                regex("[A-Z][a-z]{2}\\d{2}")
                )) {
        string month = date.substr(0,3);
        return month == "Jan" ||
                month == "Feb" ||
                month == "Mar" ||
                month == "Apr" ||
                month == "May" ||
                month == "Jun" ||
                month == "Jul" ||
                month == "Aug" ||
                month == "Sep" ||
                month == "Oct" ||
                month == "Nov" ||
                month == "Dec";
    }
    return false;
}

bool Utils::date_in_mmm_yyyy(std::string date){
    if(regex_match(
                date.begin(),
                date.end(),
                regex("[A-Z][a-z]{2}\\d{4}")
                )) {
        string month = date.substr(0,3);
        return month == "Jan" ||
                month == "Feb" ||
                month == "Mar" ||
                month == "Apr" ||
                month == "May" ||
                month == "Jun" ||
                month == "Jul" ||
                month == "Aaug" ||
                month == "Sep" ||
                month == "Oct" ||
                month == "Nov" ||
                month == "Dec";
    }
    return false;
}

bool Utils::date_in_dd_mm_yyyy(std::string date){
    return regex_match(
                date.begin(),
                date.end(),
                regex("\\d{2}[.,/,-]\\d{2}[.,/,-]\\d{4}")
                );
}

bool Utils::date_in_yyyy_mm_dd(std::string date){
    return regex_match(
                date.begin(),
                date.end(),
                regex("\\d{4}[.,/,-]\\d{2}[.,/,-]\\d{2}")
                );
}

int Utils::month_to_number(std::string month){
    int month_number = -1;
    if (month == "Jan") month_number = 1;
    else if (month == "Feb") month_number = 2;
    else if (month == "Mar") month_number = 3;
    else if (month == "Apr") month_number = 4;
    else if (month == "May") month_number = 5;
    else if (month == "Jun") month_number = 6;
    else if (month == "Jul") month_number = 7;
    else if (month == "Aug") month_number = 8;
    else if(month == "Sep") month_number = 9;
    else if(month == "Oct") month_number = 10;
    else if(month == "Nov") month_number = 11;
    else if(month == "Dec") month_number = 12;
    return month_number;
}
