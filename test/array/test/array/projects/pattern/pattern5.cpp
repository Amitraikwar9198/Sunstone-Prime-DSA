#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int n;

    cout << "Enter Any Number : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        // spaces
        for (j = n; j <= i; j++)
        {
            cout << " ";
        }
        // pattern
        for (j = n; j >= 1; j--)
        {
            if (i == j)
            {
                cout << "* ";
            }
            else
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}


