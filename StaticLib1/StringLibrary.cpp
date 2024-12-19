#include "pch.h"
#include "StringLibrary.h"
#include <algorithm>
#include <cctype>





int StringLibrary::compareStrings(const std::string& str1, const std::string& str2) {
    return str1.compare(str2);
}

std::string StringLibrary::rotateString(const std::string& str, int n) {
    if (str.empty() || n == 0) {
        return str; 
    }

    n = n % str.length(); 
    return str.substr(str.length() - n) + str.substr(0, str.length() - n);
}


void StringLibrary::countVowelsAndConsonants(const std::string& str, int& vowels, int& consonants) {
    vowels = 0;
    consonants = 0;
    for (char ch : str) {
        if (std::isalpha(ch)) {
            if (std::string("aeiouAEIOU").find(ch) != std::string::npos) {
                vowels++;
            }
            else {
                consonants++;
            }
        }
    }
}

