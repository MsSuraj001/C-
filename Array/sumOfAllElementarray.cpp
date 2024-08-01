#include<iostream>
using namespace std;
int main(){
    
    int arr[] = {3,2,4,5};
    int sum = 0;
    for(int i=0; i<4; i++){
        sum+=arr[i];
        
    }
    cout<<sum<<endl;
    return 0;
}