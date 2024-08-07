#include<iostream>
#include<vector>
using namespace std;
void sortZeroAndOne(vector<int> &v){
    int ZeroCont = 0;
    for(int ele:v){
        if(ele==0){
            ZeroCont++;
        }
    }
    for(int i=0; i<v.size(); i++){
        if(i<ZeroCont){
            v[i] = 0;
        }
        else{
            v[i]=1;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<5; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sortZeroAndOne(v);
    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    return 0;
}