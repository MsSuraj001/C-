#include<iostream>
using namespace std;
void sum(int n, int s){
    if(n==0){
        cout<<s;
    }
    sum(n-1, n+s);
    return ;
}
int main(){
    int n;
    cin>>n;
    sum(n,0);
    return 0;
}