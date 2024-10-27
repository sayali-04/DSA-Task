#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int single = 0;
    for (int num : nums) {
        single ^= num;  
    }
    return single;
}

int main() {
    vector<int> nums = {2, 2, 1}; 
    cout << "The single number is: " << singleNumber(nums) << endl;  
    return 0;
}
// Output: 1
