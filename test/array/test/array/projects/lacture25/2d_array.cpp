#include<iostream>
using namespace std;
int main(){
    int array[]={5,5,2,6,8,};
    int arr[][4]{
        {2,5,3,2},
        {5,8,6,9},
        {4,3,2,7},
        {5,7,8,9}
    };
    int row=sizeof(array)/(sizeof(int)*sizeof(int));
    int col=sizeof(array[0])/(sizeof(int));
    cout<<row<<endl;
    cout<<col<<endl;
    // int b[2][3];
    // int c[3][3]{1,2,3,4,5,6,7,8,9};
    // int d[3][4]={};
    int n, m;
    cin>>n>>m;
    int e[n][m];
    for(int i=0; i<=m; i++){
        for(int j=1; j<=n; j++){
            cin>>[i][j];
        }
    }
    for(int i=0; i<=row; i++){
        for(int j=1; j<=col;j++){
            cout<<array[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;
}