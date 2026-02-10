#include<iostream>
using namespace std;
int main(){
    int arr[]={10,50,12,15,16};
    int n;
    cin>>n;
    
    for(int i=0;i<5;i++){
        
         if(arr[i]==n){
        cout<<"index is "<<i+1<<endl;
        break;
        
    }

    }
   
    return 0;
}