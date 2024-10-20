//Task-3:Check if Array is Sorted and Rotated
#include <vector>
#include <iostream>
using namespace std;

bool checkRotatedSortedArray(vector<int>& nums) {
    int count = 0; 

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > nums[(i + 1) % nums.size()]) {
            count++;
        }
    }

    return count <= 1;
}

int main() {
    vector<int> nums = {3, 4, 5, 1, 2};
    if (checkRotatedSortedArray(nums)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}
// // Output: true