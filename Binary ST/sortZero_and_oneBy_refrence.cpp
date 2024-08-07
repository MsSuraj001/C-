#include<iostream>
#include<vector>
using namespace std;
void sortZeroAndOne(vector<int> &v){
    int left_ptr = 0;
    int Right_ptr = 0;
    while(left_ptr<Right_ptr){
        if(v[left_ptr]==1 && v[Right_ptr]==0){
            v[left_ptr++] ==0;
            v[Right_ptr--] = 1;
        }
        if(v[left_ptr==0]){
            left_ptr++;
        }
        if(v[Right_ptr==1]){
            Right_ptr--;
        }
    }
    return;
}
int main(){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0; i<n; i++){
            int ele;
            cin>>ele;
            v.push_back(ele);
        }
        sortZeroAndOne(v);
        for(int i=0; i<n;i++){
            cout<<v[i]<<" ";
        }cout<<endl;
    return 0;
}