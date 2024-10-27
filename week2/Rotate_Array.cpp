#include <iostream>
#include <vector>
#include <algorithm>

void rotate(std::vector<int>& nums, int k) {
    k %= nums.size();
    std::reverse(nums.end() - k, nums.end());
    std::reverse(nums.begin(), nums.end() - k);
    std::reverse(nums.begin(), nums.end());
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    
    rotate(nums, k);
    
    for (int num : nums) {
        std::cout << num << " ";
    }
    
    return 0;
}
//Output: 5 6 7 1 2 3 4
