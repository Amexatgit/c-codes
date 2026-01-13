#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
    std::vector<int> nums = {4, 5, 1, 2, 5, 4, 0, 2};
    std::unordered_map<int, int> counts;
     
    // PHASE 1: Fill the notebook (The Map)
    for(int i = 0; i < nums.size(); i++) {
        counts[nums[i]]++; 
    }

    // PHASE 2: Check the balls in order
    for(int i = 0; i < nums.size(); i++) {
         // Look at the ball in our hand
        
        // Look at the notebook for ONLY this ball
        if (counts[nums[i]] == 1) { 
            std::cout << "The first unique ball is: " << nums[i]<< std::endl;
            return 0; // We are done! Stop everything.
        }
    }

    return 0;
}