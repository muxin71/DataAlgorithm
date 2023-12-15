#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
using namespace std;

std::vector<int> cacheVec;
static int MAXMIUN = 10;

//Algorithm : Clear caching when access a data
std::vector<int>& lru(int data) {
    std::cout << "origin cache :";
    for (auto it = cacheVec.begin(); it != cacheVec.end(); ++it) {
        
        std::cout << " " << *it;
    }
    std::cout << std::endl;
    auto it = std::find(cacheVec.begin(), cacheVec.end(), data);
    if (it == cacheVec.end()) {
        if ( cacheVec.size() == MAXMIUN) {
            auto it = cacheVec.end();
            it--;
            cacheVec.erase(it);
            std::cout << "Clear data : " << *it << std::endl;
        }
        auto it = cacheVec.begin();
        cacheVec.insert(it, data);
        std::cout << "after access :";
        for (auto it = cacheVec.begin(); it != cacheVec.end(); ++it) {
            
            std::cout << " " << *it;
        }
        std::cout << std::endl;
        return cacheVec;
    }
    cacheVec.erase(it);
    auto pos = cacheVec.begin();
    cacheVec.insert(pos, data);
    std::cout << "after access :";
    for (auto it = cacheVec.begin(); it != cacheVec.end(); ++it) {
        
        std::cout << " " << *it;
    }
    std::cout << std::endl;
    return cacheVec;
} 



int main() {
    std::random_device rd;
    std::mt19937 generator(rd());
    for (int i = 0; i < 25; i++) {
        int randomNumber = generator() % 25 + 1;
        std::cout << "Access data : " << randomNumber << std::endl;
        lru(randomNumber);
    }
    //cacheVec.sort();
    for (auto it = cacheVec.begin(); it != cacheVec.end(); ++it) {
        
        std::cout << " " << *it;
    }

    return 0;
}