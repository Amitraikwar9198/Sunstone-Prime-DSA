#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> permuteUnique(vector<int>& nums) {
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());
    ans.push_back(nums);

    while(next_permutation(nums.begin(), nums.end())) {
        ans.push_back(nums);
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    vector<vector<int>> result = permuteUnique(nums);

    for(auto &v : result) {
        for(int x : v) cout << x << " ";
        cout << endl;
    }

    return 0;
}