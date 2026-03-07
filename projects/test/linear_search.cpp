#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int target = 17;
	for(int i=0; i<n; i++){
		if(arr[i]==target){
			cout<<i<<endl;
		}
	}
	return 0;
}