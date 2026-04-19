#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if (k < 0)
            return 0;

        sort(nums.begin(), nums.end());
        int n = nums.size();

        int i = 0, j = 1;
        int count = 0;

        while (j < n) {
            if (i == j || nums[j] - nums[i] < k) {
                j++;
            } 
            else if (nums[j] - nums[i] > k) {
                i++;
            } 
            else {
                count++;
                i++;
                j++;

                // Skip duplicates
                while (j < n && nums[j] == nums[j - 1])
                    j++;
            }
        }

        return count;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {4, 1, 8, 1, 9};
    int k = 2;

    int result = obj.findPairs(nums, k);

    cout << "Number of unique k-diff pairs: " << result << endl;

    return 0;
}