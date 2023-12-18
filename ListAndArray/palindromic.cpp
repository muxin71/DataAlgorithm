#include "palindromic.hpp"



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

