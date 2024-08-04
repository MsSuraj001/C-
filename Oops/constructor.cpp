#include<iostream>
using namespace std;

class ractangle{
    public:
    int l;
    int b;
    ractangle(){  //default constructor - no args passed 
        l = 0;
        b = 0;
    }

    ractangle(int x, int y){ //parametersed constructor - arg passed

        l= x;
        b= y;
    }

    ractangle(ractangle& r){ // copy construstor - initialise an obj by another existing obj
        l = r.l;
        b = r.b;

    }
    ~ractangle(){ //destructor function
        cout<<"Destructor is called"<<endl;
    }


};

int main(){
    ractangle r1;
    cout<<r1.l<<r1.b<<endl;

    ractangle r2(3,4);
    cout<<r2.l<<r2.b<<endl;

    ractangle r3= r2;
    cout<<r3.b<<r3.l<<endl;



    return 0;
}

