#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool ans = false;
    for (int i = 1; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            ans = true;
            break;
        }
    }
    if(!ans){
        cout<<"not prime number";
    }else{
        cout<<"prime number";
    }
 return 0;
}
