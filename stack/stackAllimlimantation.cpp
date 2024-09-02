#include<iostream>
#include<stack>
using namespace std;

class Stack{
    int capacity;
    int *arr; 
    int top;
    public:
        Stack(int c){
            this->capacity;
            arr=new int[c];
            this->top= -1;
        }
    void push(int data){
        if(this->top==this->capacity-1){
            cout<<"Overflow\n";
            return;
        }
        this->top++;
        this->arr[this->top]=data;
    }
    int pop(){
        if(this->top==-1){
            cout<<"Underflow\n";
            return INT8_MIN;

        }
        this->top--;
    }
    int getTop(){
        if(this->top==-1){
            cout<<"Underflow\n";
            return INT8_MIN;
        }
        return this->arr[this->top];

    }
    bool isEmpty(){
        return this->top== -1;
    }

    int size(){
        return this->top+1;
    }

    bool isFull(){
        return this->top==this->capacity-1;
    }

};


int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.getTop()<<"\n";
    st.push(4);
    st.push(5);
    st.push(8);
    cout<<st.getTop()<<"\n";

    return 0;
}