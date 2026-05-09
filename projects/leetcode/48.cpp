#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    // Transpose matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse each row
    for(int i = 0; i < n; i++) {
        int j = 0, k = m - 1;

        while(j < k) {
            swap(matrix[i][j], matrix[i][k]);
            j++;
            k--;
        }
    }
}

int main() {
    int n=5;

    vector<vector<int>> matrix(n, vector<int>(n));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    rotate(matrix);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}