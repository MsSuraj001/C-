#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a: ";
    cin>>a;
    int b;
    cout<<"enter b: ";
    cin>>b;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"a "<<a <<endl;
    cout<<"b "<<b <<endl;
    return 0;
}