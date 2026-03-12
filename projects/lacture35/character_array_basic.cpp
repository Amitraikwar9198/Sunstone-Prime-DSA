#include<iostream>
using namespace std;
int main(){
    int c;
    cin>>c;
    char arr[c];
    for(int i=0; i<c; i++){
        cin>>arr[i];
    }
    // traversing 
    for(int i=0; i<c; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    char a[]= {'a','b', 'c','d'};
    int n=sizeof(a)/sizeof(char);

    return 0;
}