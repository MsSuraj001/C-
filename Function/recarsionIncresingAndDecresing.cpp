#include<iostream>
using namespace std;
void decresing(int n){
    if(n==0) return;
    cout<<n;
    decresing(n-1);
    cout<<n<<" ";
    return ;
}
int main(){
    int n; 
    cin>>n;
    decresing(n);
    return 0;
}