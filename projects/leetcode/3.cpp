#include <iostream>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int n = s.size();
    string a = "";
    int r = 0;
    int ans = 0;

    while (r < n) {
        while (a.find(s[r]) != string::npos) {
            a.erase(a.begin());
        }
        a.push_back(s[r]);
        ans = max(ans, (int)a.size());
        r++;
    }
    return ans;
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    int result = lengthOfLongestSubstring(s);
    cout << "Length of longest substring without repeating characters: " << result;

    return 0;
}