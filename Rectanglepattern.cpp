/*
 * * * * * * * * * 
 * * * * * * * * *
 * * * * * * * * *
 * * * * * * * * *
 */

#include<iostream>
using namespace std;
int main(){
    int r, c;
    cout<<"Enter the row : ";
    cin>>r;
    cout<<"Enter the column : ";
    cin>>c;
    for(int i = 1; i<=c; i++){
        for(int j = 1; j<=r; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}