#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> map;

        map['I'] = 1;
        map['V'] = 5;
        map['X'] = 10;
        map['L'] = 50;
        map['C'] = 100;
        map['D'] = 500;
        map['M'] = 1000;

        int total = 0;

        for (int i = 0; i < s.length(); i++) {
            int current = map[s[i]];

            if (i + 1 < s.length() && current < map[s[i + 1]]) {
                total -= current;
            } else {
                total += current;
            }
        }

        return total;
    }
};

// Main function for testing in VS Code
int main() {
    Solution obj;
    string s = "MCMXCIV"; // Example
    cout << "Integer value: " << obj.romanToInt(s) << endl;
    return 0;
}