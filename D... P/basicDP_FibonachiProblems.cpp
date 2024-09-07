#include<iostream>
#include<vector>
using namespace std;

vector<int> dp;   // dp array --> it will store which are computed for the first

int f(int n){
    if(n == 0 || n == 1) return n;
    if(n== 0 or n==1)return n;
    if(dp[n] != -1) return dp[n];
    return dp[n] = f(n-1) + f(n-2);

}

int fbu(int n){
    if(n == 0 || n == 1) return n;
    dp.resize(n+1, -1);
    dp[0] = 0;                         // time c (0)n
    dp[1] = 1;
    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int fbuo(int n){
    if(n == 0 || n == 1) return n;
    int a = 0;
    int b = 1;
    int c;
    for(int i=2; i<=n; i++){    // time c(0)n
        c = a+b;
        a = b;
        b = c;
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    dp.resize(n+1, -1);
    cout<<f(n)<<" "<<fbu(n)<<" "<<fbuo(n)<<"\n";


    return 0;
}