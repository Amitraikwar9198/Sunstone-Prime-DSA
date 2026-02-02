#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int n;
    cout<<"Enter Any Number : ";
    cin>>n;
    for(i=1; i <= n; i++){
        // spaces
        for(j = 1; j <= n-i ; j++){
            cout<<" \t";

        }
        for(j=1; j<=2*i-1; j++){
            cout<<i<<"\t";
        }
        cout<<endl;

    }

return 0;

}