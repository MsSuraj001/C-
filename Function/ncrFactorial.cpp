#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i=0; i<n; i++){
        fact = fact*i;
    }
    return fact;
}
int combination( int n, int r){
    int ncr= factorial(n)/(factorial(r)*(factorial(n-r)));
    return ncr;
}
int main(){
    int n; 
    cout<<"Enter Your N: ";
    cin>>n;
    int r; 
    cout<<"Enter Your R: ";
    cin>>r;
    int ncr = combination(n,r);
    cout<<combination;
    return 0;
}