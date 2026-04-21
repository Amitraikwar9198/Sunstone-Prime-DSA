#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> nums(nums1.size() + nums2.size());

        // merge both arrays
        merge(nums1.begin(), nums1.end(),
              nums2.begin(), nums2.end(),
              nums.begin());

        int s = nums.size();
        double median = 0;

        if (s % 2 != 0) {
            median = nums[s / 2];
        } else {
            median = (nums[s / 2] + nums[(s / 2) - 1]) / 2.0;
        }

        return median;
    }
};

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    vector<int> nums1(n1);

    cout << "Enter elements of first sorted array: ";
    for (int i = 0; i < n1; i++) {
        cin >> nums1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;
    vector<int> nums2(n2);

    cout << "Enter elements of second sorted array: ";
    for (int i = 0; i < n2; i++) {
        cin >> nums2[i];
    }

    Solution obj;
    double result = obj.findMedianSortedArrays(nums1, nums2);

    cout << "Median of two sorted arrays: " << result << endl;

    return 0;
}