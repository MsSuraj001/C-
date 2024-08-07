#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,3,6,4,9};
    int targate = 6;
    int ans = -1;
    for(int i=0; i<5; i++){
        if(targate==arr[i]){
            ans = i;
        }
    }
    cout<<ans<<endl;
    return 0;
}