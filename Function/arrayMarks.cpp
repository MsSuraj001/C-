#include<iostream>
using namespace std;
// class Fruit{
//     public:
//     string name;
//     string color;
    
// };
// int main(){
//     Fruit apple;
//     apple.name = "apple";
//     apple.color = "red";
//     cout<<apple.name<<apple.color<<endl;

//     Fruit *mango = new Fruit();
//     mango->name = "mango";
//     mango->color = "yellow";
//     cout<<mango->name<<mango->color<<endl;
//     return 0;
// }
// 
class Parent{
    public:
    Parent(){
        cout<<"Parent child"<<endl;
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
        cout<<"GrandChild class"<<endl;
    }
};
int main(){
    GrandChild c;
}