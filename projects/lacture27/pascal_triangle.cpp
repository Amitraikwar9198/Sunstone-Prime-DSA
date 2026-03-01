#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 5;

    vector<vector<int>> v;

    for(int i = 0; i < n; i++) {
        vector<int> row;

        for(int j = 0; j <= i; j++) {
            if(j == 0 || j == i)
                row.push_back(1);
            else
                row.push_back(v[i-1][j-1] + v[i-1][j]);
        }

        v.push_back(row);
    }

    // print
    for(int i = 0; i < v.size(); i++) {
        for(int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}