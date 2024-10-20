/*Task-5 : Find the Missing Number*/
#include <vector>
#include <iostream>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size(); 
    int expectedSum = n * (n + 1) / 2; 
    int actualSum = 0; 

    for (int num : nums) {
        actualSum += num; 
    }

    return expectedSum - actualSum;
}

int main() {
    vector<int> nums = {3, 0, 1}; 
    int missing = missingNumber(nums);
    cout << "The missing number is: " << missing << endl;
    return 0;
}
/*Output: The Missing number is : 2 */
