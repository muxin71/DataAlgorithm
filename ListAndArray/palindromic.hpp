#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#define START_SPACE(x) namespace x {
#define END_SPACE(x) }
#ifndef PALINDROMIC_HPP
#define PALINDROMIC_HPP



//START_SPACE(ALO)


bool whetherPalindromicString(std::string str) {
    int head = 0;
    int tail = str.size() - 1;
    while (head < tail) {
        while (head < tail && !isalnum(str[head])) {
            ++head;
        }
        while (head < tail && !isalnum(str[tail])) {
            --tail;
        }
        if(tolower(str[head]) != tolower(str[tail])) {
            return false;
        }
        ++head;
        --tail;
    }

    return true;
}









//END_SPACE(ALO) 

#endif