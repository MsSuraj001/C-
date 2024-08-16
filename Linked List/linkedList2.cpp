#include<iostream>
using namespace std;
class Node {
    public:
    int val ;
    Node* next;
    
    Node(int data){
        val = data ;
        next = NULL;
    }
};
int main(){
    Node*n = newNode(1);
    cout<<n->val<<" "<<n->next<<endl;
    return 0;
}