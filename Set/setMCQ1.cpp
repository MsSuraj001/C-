#include<iostream>
#include<set>
using namespace std;

int main(){
    set<string> invitrlist;

    int n; 
    cin>>n;

    while(n--){
        string name ;
        cin>>name;

        invitrlist.insert(name);
    }
    cout<<"Printing invite list:";
    for(auto name:invitrlist){
        cout<<name<<endl;
        
    }

    return 0;
}