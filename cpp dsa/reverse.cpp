#include<iostream>
using namespace std;

int reverse(int a[],int b, int m){
    int s=m;
    int e=b-1;
    while(s<=e){
        int temp=a[s];
        a[s]=a[e];
        a[e]=temp;
        s++;
        e--;
    }
}

int main(){
    int b;
    cout << "enter the size of the arrays: ";
    cin >> b;
    int a[b];
    cout << "enter the elements of the array: ";
    int m;
    cout << "enter the position from where u want to reverse the array: ";
    cin >> m;
    for(int i=0 ; i < b ; i++ ){
        cin >> a[i];
    }


    for(int i=0 ; i < b ; i++ ){
        cout << a[i] << " ";

    }    

    reverse(a,b,m);
     for(int i=0 ; i < b ; i++ ){
        cout << a[i] << " ";

    }    
    
}