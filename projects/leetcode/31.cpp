#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int index = -1;

    // Step 1: find breakpoint
    for(int i = n - 2; i >= 0; i--) {
        if(nums[i] < nums[i + 1]) {
            index = i;
            break;
        }
    }

    // Step 2: if no breakpoint → reverse whole array
    if(index == -1) {
        reverse(nums.begin(), nums.end());
        return;
    }

    // Step 3: find next greater element and swap
    for(int i = n - 1; i > index; i--) {
        if(nums[i] > nums[index]) {
            swap(nums[i], nums[index]);
            break;
        }
    }

    // Step 4: sort (or reverse) remaining part
    reverse(nums.begin() + index + 1, nums.end());
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    nextPermutation(nums);

    for(int x : nums) cout << x << " ";

    return 0;
}