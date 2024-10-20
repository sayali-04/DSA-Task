// Task-2: To find second largest element from an array if not exist return -1
#include <iostream>
#include <climits>  
using namespace std;

int secondLargest(int arr[], int n) {
    if (n < 2) {
        return -1;  
    }

    int firstLargest = INT_MIN, secondLargest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
        }
    }

    return (secondLargest == INT_MIN) ? -1 : secondLargest;
}

int main() {
    int arr[] = {10, 10, 10}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = secondLargest(arr, n);
    cout << result << endl;  

    return 0;
}
output:-1
