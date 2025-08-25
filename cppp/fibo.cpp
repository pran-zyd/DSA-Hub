#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int n=10;
    cout << a << endl << b << endl;
    for(int i=0; i<=n;i++){
        int l=a+b;
        a=b;
        b=l;   
        cout << l << endl;
}
}