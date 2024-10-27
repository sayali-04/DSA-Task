#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> findUnion(const std::vector<int>& a, const std::vector<int>& b) {
    int i = 0, j = 0;
    std::vector<int> unionResult;
    
    
    while (i < a.size() && j < b.size()) {
        
        if (a[i] == b[j]) {
            if (unionResult.empty() || unionResult.back() != a[i]) {
                unionResult.push_back(a[i]);
            }
            i++;
            j++;
        }
        
        else if (a[i] < b[j]) {
            if (unionResult.empty() || unionResult.back() != a[i]) {
                unionResult.push_back(a[i]);
            }
            i++;
        } else {
            if (unionResult.empty() || unionResult.back() != b[j]) {
                unionResult.push_back(b[j]);
            }
            j++;
        }
    }
    
    while (i < a.size()) {
        if (unionResult.empty() || unionResult.back() != a[i]) {
            unionResult.push_back(a[i]);
        }
        i++;
    }
    
    // Add remaining elements of `b` if any
    while (j < b.size()) {
        if (unionResult.empty() || unionResult.back() != b[j]) {
            unionResult.push_back(b[j]);
        }
        j++;
    }
    
    return unionResult;
}

int main() {
    std::vector<int> a = {1, 2, 2, 3, 4, 5};
    std::vector<int> b = {1, 2, 3, 6, 7};
    
    std::vector<int> result = findUnion(a, b);
    
    for (int num : result) {
        std::cout << num << " ";
    }
    
    return 0;
}
//Output: 1 2 3 4 5 6 7
