#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& arr) {
    int r = arr.size();
    int c = arr[0].size();

    int left = 0, right = c - 1;
    int top = 0, bottom = r - 1;

    vector<int> ans;

    while(left <= right && top <= bottom) {

        // Left to Right
        for(int i = left; i <= right; i++)
            ans.push_back(arr[top][i]);
        top++;

        // Top to Bottom
        for(int i = top; i <= bottom; i++)
            ans.push_back(arr[i][right]);
        right--;

        // Right to Left
        if(top <= bottom) {
            for(int i = right; i >= left; i--)
                ans.push_back(arr[bottom][i]);
            bottom--;
        }

        // Bottom to Top
        if(left <= right) {
            for(int i = bottom; i >= top; i--)
                ans.push_back(arr[i][left]);
            left++;
        }
    }

    return ans;
}

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<int>> arr(r, vector<int>(c));

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    vector<int> result = spiralOrder(arr);

    for(int x : result)
        cout << x << " ";

    return 0;
}