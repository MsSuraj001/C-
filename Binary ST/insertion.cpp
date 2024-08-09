#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* left;
    Node* right;

    Node(int v){
        value = v;
        left = right = NULL;
    }
};
class BST{
    public:
    Node* root;

    BST(){
        root = NULL;
    }
};
// void insertionBST(Node* &root,int val){
//     Node* newNode = new Node(val);
//     if(root == NULL){
//         root = newNode;
//         return;
//     }

//     Node* current = root;
//     while (true){
//         if(current->value > val){
//             if(current ->left == NULL){
//                 current->left = newNode;
//                 return;
//             }
//             current = current->left;
//         }
//         else{
//             if(current->right==NULL){
//                 current->right=newNode;
//                 return;
//             }
//             current= current->right;
//         }
//     }
    
// }
Node* insertBST(Node* &root, int val){
   // base case 
   if(root == NULL){
        Node* newNode = new Node(val);
        return newNode;
   }
   if(root->value > val){
        root->left = insertBST(root->left,val);
   }
   else if(root->value < val){
        root->right = insertBST(root->right,val);

   }
   return root;

}
bool searchBST(Node* &root,int key){
        if(root==NULL){
            return false;
        }
        if(root->value==key){
            return true;
        }

        if(root->value < key){
            return searchBST(root->right,key);
        }
        if(root->value > key){
            return searchBST(root->left,key);
        }
}


void inorderTravarsal(Node* root){
    if(root == NULL){
        return;
    }
    inorderTravarsal(root->left);
    cout<<root->value<<" ";
    inorderTravarsal(root->right);

    
}


int main(){
    BST bst1;
    bst1.root = insertBST(bst1.root, 3);
    bst1.root = insertBST(bst1.root, 1);
    bst1.root = insertBST(bst1.root, 4);
    bst1.root = insertBST(bst1.root, 5);
    // insertionBST(bst1.root, 6);
    // insertionBST(bst1.root, 7);



    inorderTravarsal(bst1.root);
    cout<<endl;

    cout<<searchBST(bst1.root,8)<<endl;

    return 0;
}