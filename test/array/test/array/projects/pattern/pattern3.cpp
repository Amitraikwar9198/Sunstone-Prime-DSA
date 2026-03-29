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
        //pattern
        for(j=1; j<=i; j++){
            cout<<j<<" \t";
            
        }
        //right 
       for(j=i-1; j>=1; j--){
            cout<<j<<" \t";
       }
       for(j=1; j<=n-1; j++){
            cout<<" \t";
       }
        cout<<endl;

    }

return 0;

}