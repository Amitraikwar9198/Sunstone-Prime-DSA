#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=INT_MAX;
    int large=INT_MIN;
    for(int i=0;i<n;i++){      
        if(ans>arr[i]){
            ans=arr[i];
        }
        if(large<arr[i]){
            large=arr[i];
        }
    }
    cout<<ans<<endl;
    cout<<large<<endl;
      return 0;

}