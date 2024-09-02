#include<iostream>
using namespace std;
class Node {
    public:
    int value;
    Node* left;
    Node* right;

    Node (int v ){
        value = v;
        left = right= NULL;

    }

};

int main(){
    Node*root = new Node (2);
    Node->left = new Node(3);
    Node->right = new Node(4);

    cout<<"Root node"<<root->value<<endl;
    cout<<"Left Child: "<<root->left->value<<endl;
    cout<<"Right Child:"<<root->right->value<<endl;

    return 0;
}