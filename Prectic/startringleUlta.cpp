#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no star: ";
    cin>>n;
    //int a =n-1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}