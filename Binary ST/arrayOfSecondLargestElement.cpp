#include<iostream>
using namespace std;
int largestElementIndex(int arr[],int size){
    int max =INT8_MIN;
    int maxindex = -1;
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max==arr[i];
            maxindex = i;
        }
    }
    return maxindex;
}
int main(){
    int arr[] = {7,6,2,4,7,6,3};
    int n = 7;
    int indexoflargest = largestElementIndex(arr,n);
    cout<<arr[indexoflargest]<<endl;
    int largestElement = arr[indexoflargest];
    for(int i=0; i<n; i++){
        arr[i]==-1;
    }
    int indexofsecondElement = largestElementIndex(arr,n);
    cout<<arr[indexoflargest]<<endl;
    return 0;
}
