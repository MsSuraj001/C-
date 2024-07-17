#include<iostream>
using namespace std;
int main(){
    int arr[3][4] = {{1,0,1,1},{1,0,0,1},{1,0,1,0}};
    int maxCount = 0;
    int count = 0;
    for(int i=0; i<=3; i++){
        for(int j=0; j<=4; j++){
            if(j==1){
                count++;
            }
            // if(maxCount<count){
            //     maxCount=count;
            // }
        }
        if(maxCount<count){
            maxCount=count;
            }

    }
    cout<<count;
    return 0;
}