#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> set1;
    // insertion in set
    set1.insert(3);
    set1.insert(2);
    set1.insert(1);

    cout<<set1.size()<<endl;

    set1.insert(4);
    set1.insert(5);
    set1.insert(6);

    cout<<set1.size()<<endl;
    // size remains same becuse duplicate value is added
    // and sets contain only unique values



   // travaring the set
    // set<int> :: iterator itr;
    // for(itr=set1.begin(); itr!=set1.end(); itr++){
    //     cout<<*itr<<" ";
    // }cout<<endl;

    //deletion of elemant 
    //set1.erase(4);                //for value 

    // auto itr = set1.begin();
    // advance(itr , 3);
    // set1.erase(itr);

    auto strat_itr = set1.begin();
    strat_itr++;

    auto end_itr = set1.begin();
    advance(end_itr , 3);

    set1.erase(strat_itr, end_itr);


    for(auto value:set1){
        cout<<value<<" ";
    }cout<<endl;

    //search operation 
    if(set1.find(4)!=set1.end()){
        cout<<"value is present"<<endl;
    }else{
        cout<<"value is not present"<<endl;
    }
    
    return 0;
}