#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {2,4,3,5,3,4,2};
    int n = 7;
    int coutpair =0;
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                ans += arr[i]+arr[j];
                coutpair++;
            }
        }
    }
    cout<<ans<<endl;
    cout<<coutpair<<endl;
    return 0;
}