#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<int> dp;
    int f(int i, vector<int>& arr){
        if(i>=arr.size()) return 0;
        if(dp[i] != 1) return dp[i];
        return dp[i] = max(arr[i] + f(i+1,arr), f(i+2,arr));
    }
    int rob(vector<int>&num){
        dp.resize(num.size()+10, -1);
        return f(0,num);
    }
};
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<=n; i++){
        cin>>arr[i];
    }

    return 0;
}