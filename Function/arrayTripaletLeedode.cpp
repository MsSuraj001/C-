#include<iostream>
using namespace std;
int main(){
    int arr[] = {-1,0,1,2,-1,-4};
    int n = 6;
    for(int i=0; i<=6; i++){
        for(int j=i+1; j<=n; j++){
            for(int k=j+1; k<=n; k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    cout<<i<<" "<<j<<" "<<k;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
