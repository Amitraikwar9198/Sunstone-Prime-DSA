#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int ans = 0;

        while (x != 0) {
            int k = x % 10;

            // Check overflow
            if (ans > INT_MAX / 10 || ans < INT_MIN / 10) {
                return 0;
            }

            ans = ans * 10 + k;
            x = x / 10;
        }

        return ans;
    }
};

int main() {
    Solution obj;

    int x;
    cout << "Enter a number: ";
    cin >> x;

    int result = obj.reverse(x);

    cout << "Reversed number: " << result << endl;

    return 0;
}