#ifndef UTILS_H
#define UTILS_H

#include <string>


class Utils
{
public:
    Utils();
    static bool stringInEnglish(std::string string);
    static bool stringInEnglishWithSpaces(std::string string);
    static bool date_in_mmm_yy(std::string date);
    static bool date_in_mmm_yyyy(std::string date);
    static bool date_in_dd_mm_yyyy(std::string date);
    static bool date_in_yyyy_mm_dd(std::string date);
    static int month_to_number(std::string month);
};

#endif // UTILS_H
