#ifndef STRING_LIBRARY_H
#define STRING_LIBRARY_H

#include <string>

class StringLibrary {
public:
    static int compareStrings(const std::string& str1, const std::string& str2);
    static std::string rotateString(const std::string& str, int n);
    static void countVowelsAndConsonants(const std::string& str, int& vowels, int& consonants);
};

#endif // STRING_LIBRARY_H
