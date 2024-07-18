#include<iostream>
#include<limits>
using namespace std;
int main(){
    int arr[] = {3,2,5,4,4,7,6};
    int max = INT8_MIN;
    int smax = INT8_MIN;
    int index = 0;
    for(int i=0; i<7; i++){
        if(max<arr[i]){
            smax = max;
            max = arr[i];
            //cout<<i<<endl;
        }
        else if(smax<arr[i]&&max!=i){
            smax = arr[i];
            //cout<<i<<endl;
        }
        index++;
    }
    cout<<smax<<endl<<index;
    return 0;
}
