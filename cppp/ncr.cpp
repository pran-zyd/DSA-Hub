#include<iostream>
using namespace std;

 int fact(int a){
        int f=1;
        for(int i=1; i<=a; i++){
            f=f*i;
        }
        return f;
 }

 int ncr(int n,int r){
    int c = fact(n)/(fact(r)*fact(n-r));
    return c;
 }

 int main(){
    int n,r,a;
    cout << "enter n and r ";
    cin >> n >> r;
    a=ncr(n,r);
    cout << a;
 }

 