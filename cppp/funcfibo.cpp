#include<iostream>
using namespace std;
int fibo(int n){
    int l;
    int a=0;
    int b=1;
    if(n==1){l=0;}
    if(n==2){ l=1;}
    for (int i=1;i<=n-2;i++){
        l=a+b;
        a=b;
        b=l;
    }
    
    return l;

}
int main(){
    int a,b;
    cout << "Enter the place";
    cin >> a;
    b=fibo(a);
    cout << b;


}