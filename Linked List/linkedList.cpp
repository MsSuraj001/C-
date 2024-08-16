#include<iostream>
using namespace std;
class Node {
    public:
    int val ;
    Node*next ;
    Node(int data){
        val = data ;
        next = NULL;
    }
};
void insertAtHead(Node* &head , int val){
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void insertAtTail(Node* &head, int val){
    Node* new_node = new Node(val);
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}

void insertAtPosition(Node* &head, int pos, int val){
    if(pos==0){
        insertAtHead(head, pos);
        return ;
    }
    Node* new_node = new Node(val);
    Node* temp = head;
    int current_pos= 0;
    while(current_pos!= pos-1){
        temp = temp->next;
        current_pos++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void insertAtUpdation(Node* &head, int k, int val){
    Node* temp = head;
    int curr_pos = 0;
    while(curr_pos!= k){
        temp = temp->next;
        curr_pos++;
    }
    temp->val = val;
}

void deleteAtHead (Node* &head){
    Node* temp = head;
    head = head->next;
    free(temp);
}

void deleteAtTail(Node* &head){
    Node*seconde_last = head;
    while(seconde_last->next->next!=NULL){
        seconde_last = seconde_last->next;
    }
    Node* temp = seconde_last->next;
    seconde_last->next=NULL;
    free(temp);
}

void deleteAtPosition(Node* &head, int pos){
    if(pos == 0){
        deleteAtHead(head);
        return;
    }
    int current_pos =0;
    Node* prev = head;
    while(current_pos!=pos-1){
        prev = prev->next;
        current_pos++;
    }
    Node* temp = prev->next;
    prev->next = prev->next->next;
    free(temp);
}


void display (Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> val <<"->";
        temp = temp->next ;
    }
    cout<<"NULL"<<endl;
}


int main(){
    Node* head = NULL;
    insertAtHead(head, 1);
    display(head);
    insertAtHead(head, 2);
    display(head);
    insertAtTail(head,3);
    display(head);
    insertAtPosition(head,2,6);
    display(head);
    insertAtUpdation(head, 2,5);
    display(head);

    deleteAtHead(head);
    display(head);
    deleteAtTail(head);
    display(head);
    deleteAtPosition(head, 0);
    display(head);
    return 0;
}