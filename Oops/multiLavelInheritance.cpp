#include<iostream>
using namespace std;
class Parent {
    public:
    Parent(){
        cout<<"Parent Child"<<endl;
    }
};

class Child: public Parent{
    public:
    Child(){
        cout<<"Child class"<<endl;
    }
};

class GrandChild: public Child{
    public: 
    GrandChild(){
    cout<<"GrandChild"<<endl;
    }
};
int main(){
    GrandChild c;
    return 0;
}