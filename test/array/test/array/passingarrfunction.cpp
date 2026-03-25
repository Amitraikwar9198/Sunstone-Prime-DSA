#include<iostream>
using namespace std;
void change(int a[]){
    a[0]= 50;

}
int main(){
    int arr[]={85,52,69,85,78,45,20,21};
    cout<<arr[0]<<endl;
    change(arr);
    cout<<arr[0];
    return 0;
}