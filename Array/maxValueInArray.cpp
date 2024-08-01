#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,4,7,3};
    int max = INT8_MIN;
    for(int i=0; i<5; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max;
    return 0;
}