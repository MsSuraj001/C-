#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int>&v){
    int n = v.size();
    for(int i=0; i<n; i++){
        int current_element =v[i];
        //fint the currect position for our current elment
        int j= i-1;
        while(j>0 && v[i]>current_element){
            v[i+1]=v[j];
            j--;
        }
        //Insert current elment 
        v[j+1]= current_element;
    }

    return;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    insertionSort(v);

    for(int i=0; i<n; i++){
        cout<<v[i];
    }
    cout<<endl;
    return 0;
}