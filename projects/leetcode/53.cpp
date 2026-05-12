#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    int curr_sum = nums[0];
    int max_sum = nums[0];

    for(int i = 1; i < n; i++) {
        if(curr_sum < 0) {
            curr_sum = 0;
        }

        curr_sum += nums[i];

        if(curr_sum > max_sum) {
            max_sum = curr_sum;
        }
    }

    return max_sum;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << maxSubArray(nums);

    return 0;
}