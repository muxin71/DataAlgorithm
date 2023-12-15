#include <iostream>
#include <string>
#include <algorithm>
#define START_SPACE(x) namespace x {
#define END_SPACE(x) }
#ifndef PALINDROMIC_HPP
#define PALINDROMIC_HPP



//START_SPACE(ALO)

bool whetherPalindromicString(std::string astring) {
    auto head = astring.begin();
    auto tail = astring.end();
    if (astring.size() == 0) {
        return true;
    }
    
    std::transform(astring.begin(), astring.end(), astring.begin(),
                   [](unsigned char c) { return std::tolower(c); });
    --tail;
    if (astring.size() % 2 != 0) {
        
        while(*head == *tail && head != tail) {
            head++;
            tail--;
        }
        if (head == tail) {
            return true;
        }
        return false;
    }
    //while(*head == *tail && head != tail)
    while(*head == *tail && head < tail - 1) {
        head++;
        tail--;
    }
    if (head == tail - 1) {
        if (*head == *tail) {
            return true;
        }
    } else {
        return false;
    }
}










//END_SPACE(ALO) 

#endif
