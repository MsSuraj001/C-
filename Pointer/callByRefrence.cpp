#include<iostream>
using namespace std;
int swap(int *x,int *y){
    int temp = *x; 
    *x = *y;
    *y = temp;
}
int main(){
    int a = 10; 
    int b = 20; 

    int *x = &a;
    int *y = &b; 
    swap(a,b);
    cout<<a<<" "<<b;
    return 0;
}