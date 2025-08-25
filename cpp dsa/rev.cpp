#include<iostream>
using namespace std;

int reverse(int a[],int b,int k){
    int s=k;
    int e=b-1;
    while(s<=e){
        swap(a[s],a[e]);
        s++;
        e--;
    }
}

int main(){
    int b;
    cout << "enter the size of the array: ";
    cin >> b;

    int a[b];
    cout << "enter the elements of the arrays :";
    for(int i=0;i<b;i++){
        cin >> a[i];
    }

    cout << "enter the index from where string needs to be reversed: ";
    int k;
    cin >> k;

    reverse(a,b,k);
}