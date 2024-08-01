#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,4,4,5,3};
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    for(int i=0; i<sizeof(arr); i++){
        cout<<arr[i]<<endl;
    }

    for(int ele:arr){
        cout<<ele;
    }
    int i = sizeof(arr);
    while (i<sizeof(arr)){
        cout<<arr[i];
    }
    {
        /* code */
    }
    
    return 0;
}