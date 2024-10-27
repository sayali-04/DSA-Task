#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(const vector<int>& arr, int k) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == k) {
            return true;
        }
        else if (arr[mid] > k) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return false;  
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};  
    int k = 5; 
    if (binarySearch(arr, k)) {
        cout << "Element " << k << " is present in the array." << endl;
    } else {
        cout << "Element " << k << " is not present in the array." << endl;
    }
    return 0;
}
//Output:True
// Element 5 is present in the array.
