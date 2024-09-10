#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int n = 9;
    for(int i=0; i<n; i++){
        int a = 12;
        cout<<a<<endl;
        cout<<::a;
    }
    // cout<<a<<endl;
     cout<<::a;
     return 0;
}