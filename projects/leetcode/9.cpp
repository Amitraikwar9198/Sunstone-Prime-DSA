#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        long rev = 0;
        int og = x;

        while (x > 0) {
            int k = x % 10;
            rev = rev * 10 + k;
            x = x / 10;
        }

        return rev == og;
    }
};

int main() {
    Solution obj;

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (obj.isPalindrome(num)) {
        cout << "Palindrome Number" << endl;
    } else {
        cout << "Not a Palindrome Number" << endl;
    }

    return 0;
}