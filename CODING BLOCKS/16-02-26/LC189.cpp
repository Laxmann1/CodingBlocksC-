#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    if (n == 0) return;

    k = k % n;  
    vector<int> temp(n);

    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = nums[i];
    }

    nums = temp;  
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotate(nums, k);

    for (int num : nums)
        cout << num << " ";

    return 0;
}
