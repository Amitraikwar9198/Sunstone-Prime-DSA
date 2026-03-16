#include <iostream>
#include <string>
#include <climits>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int i = 0;
    int n = s.size();

    while (i < n && s[i] == ' ') {
        i++;
    }

    int sign = 1;
    if (i < n && (s[i] == '+' || s[i] == '-')) {
        if (s[i] == '-') {
            sign = -1;
        }
        i++;
    }

    long long num = 0;

    while (i < n && isdigit(s[i])) {
        num = num * 10 + (s[i] - '0');

        if (sign * num > INT_MAX) {
            cout << INT_MAX;
            return 0;
        }

        if (sign * num < INT_MIN) {
            cout << INT_MIN;
            return 0;
        }

        i++;
    }

    cout << sign * num;

    return 0;
}