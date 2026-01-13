#include <iostream>
#include <map>
#include <string>

int main() {
    std::string word = "programming";
    std::map<char, int> freqMap;

    // Fix 1: Use word.length() instead of hardcoded 10
    for(int i = 0; i < word.length(); i++) {
        freqMap[word[i]]++;
    }

    // Fix 2: Using the formal Iterator syntax
    // This is what the "Hint" in the template was referring to
    std::map<char, int>::iterator it; 
    
    std::cout << "Character Frequencies (Alphabetical Order):" << std::endl;
    for(auto it: freqMap) {
        // it->first is the Key (char), it->second is the Value (int)
        std::cout << it->first << " : " << it->second << std::endl;
    }
    
    return 0;
}