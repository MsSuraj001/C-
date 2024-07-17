#include<iostream>
#include<vector>
using namespace std;
void sortZeroAndOne(vector<int> &v){
    int zeroone_cout = 0;
    for(int ele:v){
        if(ele==0){
            zeroone_cout++;    }
    }
    for(int i=0; i<v.size(); i++){
        if(i<zeroone_cout){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
}

int main(){
    vector<int> v;
    int n;
    cin>>n;
    cout<<"Enter the your element"<<endl;
    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    sortZeroAndOne(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }

    return 0;
    
}
