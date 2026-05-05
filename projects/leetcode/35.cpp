#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int s = 0;
    int e = nums.size() - 1;

    if(target > nums[e]) return e + 1;

    while(s <= e) {
        int m = s + (e - s) / 2;

        if(nums[m] == target) {
            return m;
        }
        else if(target < nums[m]) {
            e = m - 1;
        }
        else {
            s = m + 1;
        }
    }

    return s;
}

int main() {
    int n, target;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    cin >> target;

    int index = searchInsert(nums, target);

    cout << index;

    return 0;
}