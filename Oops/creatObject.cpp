#include<iostream>
using namespace std;

class Fruit{
    public:
    string name;
    string color;
};

int main(){
    Fruit apple;
    apple.color = "red";
    apple.name = "apple";

    Fruit *mango = new Fruit();
    mango->color = "yello";
    mango->name = "Mango";

    cout<<apple.color<<apple.name<<endl;
    cout<<mango->name<<mango->color;

    return 0;
}