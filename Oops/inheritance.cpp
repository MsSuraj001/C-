#include<iostream>
using namespace std;
class Parents{
    public:
    int x;

    protected:
    int y ;

    private:
    int z;
};
class child1: public Parents{
    // x will remain public
    // y will remain protected
    // z will not be accessible

};
class child2: private Parents{
//     x will be private
//     y will be private
//     z will be inaccessible 
};

class child3 : protected Parents{
//     x will be protected
//     y will be protected
//     z will be inaccessble
};

int main(){

    return 0;
}