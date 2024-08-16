#include<iostream>
#include<List>
using namespace std;
int main(){
    list<int> l1 = {1,2,3,4};
    // auto itr =l1.begin();
    // cout<<*itr<<endl;

    // for(auto num: l1){    // It's all trivasal node
    //     cout<<num<<endl;
    // }

    // for(auto itr =l1.begin(); itr != l1.end(); itr++){
    //     cout<<*itr<<" ";
    // }cout<<endl;                                 //  all Travasal of right side

    // for(auto itr = l1.rbegin(); itr != l1.rend(); itr++){
    //     cout<<*itr<<" ";
    // }cout<<endl;                                 // Printing the revalsal way

    // auto itr = l1.begin();
    // advance(itr, 2 );
    // l1.insert(itr,5);
    // for(auto itr = l1.begin();itr != l1.end(); itr++){
    //     cout<<*itr<<" ";
    // }cout<<endl;

    // auto itr =l1.begin();
    // advance(itr,2);
    // l1.insert(itr,3,5);
    // for(auto itr = l1.begin();itr != l1.end(); itr++){
    //     cout<<*itr<<" ";
    // }cout<<endl;
     
    //  auto l = l1.begin();
    //  auto r = l1.begin();
    //  advance(r,2);
    //  l1.insert(itr,l,r);
    //  for(auto itr = l1.begin(); itr != l1.end(); itr++){
    //     cout<<*itr<<" ";
    //  }cout<<endl;
    
    auto s_itr = l1.begin();
    advance(s_itr,2);
    for(auto itr = l1.begin();itr!=l1.end(); itr++){
        cout<<*itr<<" ";
    }cout<<endl;
    return 0;
}