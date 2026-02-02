#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter Any Number : ";
    cin >> m;
    int n = (m + 1) / 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - 1; j++)
        {
            cout << "* ";
        }
        // spaces
        for (int j = 1; j <= 2 * i; j++)
        {
            cout << " ";
        }
        // right star
        for (int j = 1; j <= n - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - 1; j++)
        {
            cout << "* ";
        }
        // spaces
        for (int j = 1; j <= 2 * i; j++)
        {
            cout << " ";
        }
        // right star
        for (int j = 1; j <= n - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}