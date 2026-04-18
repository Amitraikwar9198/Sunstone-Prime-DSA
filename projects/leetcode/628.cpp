#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximumProduct(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    
    int option1 = nums[n-1] * nums[n-2] * nums[n-3];
    int option2 = nums[0] * nums[1] * nums[n-1];
    
    return max(option1, option2);
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = maximumProduct(nums);
    cout << "Maximum product of three numbers: " << result << endl;

    return 0;
}