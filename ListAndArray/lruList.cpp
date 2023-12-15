#include <iostream>
#include <list>
#include <random>
#include <algorithm>
using namespace std;

std::list<int> cacheList;
static int MAXMIUN = 10;

//Algorithm : Clear caching when access a data
std::list<int>& lru(int data) {
    std::cout << "origin cache :";
    for (auto it = cacheList.begin(); it != cacheList.end(); ++it) {
        
        std::cout << " " << *it;
    }
    std::cout << std::endl;
    auto it = std::find(cacheList.begin(), cacheList.end(), data);
    if (it == cacheList.end()) {
        if ( cacheList.size() == MAXMIUN) {
            auto it = cacheList.end();
            it--;
            cacheList.erase(it);
            std::cout << "Clear data : " << *it << std::endl;
        }
        auto it = cacheList.begin();
        cacheList.insert(it, data);
        std::cout << "after access :";
        for (auto it = cacheList.begin(); it != cacheList.end(); ++it) {
            
            std::cout << " " << *it;
        }
        std::cout << std::endl;
        return cacheList;
    }
    cacheList.erase(it);
    auto pos = cacheList.begin();
    cacheList.insert(pos, data);
    std::cout << "after access :";
    for (auto i = cacheList.begin(); i != cacheList.end(); ++i) {
        
        std::cout << " " << *i;
    }
    std::cout << std::endl;
    return cacheList;
} 



int main() {
    std::random_device rd;
    std::mt19937 generator(rd());
    for (int i = 0; i < 25; i++) {
        int randomNumber = generator() % 25 + 1;
        std::cout << "Access data : " << randomNumber << std::endl;
        lru(randomNumber);
    }
    //cacheList.sort();
    for (auto it = cacheList.begin(); it != cacheList.end(); ++it) {
        
        std::cout << " " << *it;
    }

    return 0;
}