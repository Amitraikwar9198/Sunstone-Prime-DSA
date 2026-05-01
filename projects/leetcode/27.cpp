#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int unique = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[unique] = nums[i];
            unique++;
        }
    }

    return unique;
}

int main() {
    int n, val;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    cin >> val;

    int k = removeElement(nums, val);

    cout << k << endl;

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
