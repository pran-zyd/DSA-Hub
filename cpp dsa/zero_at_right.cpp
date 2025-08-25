#include<iostream>
using namespace std;

int sort(int a[],int b){
    int nz=0;

    for(int i=0;i<b;i++){
        if(a[i]!=0){
            swap(a[i],a[nz]);
        }
    }
}

int main(){
     int b;
    cout << "enter the size of the arrays: ";
    cin >> b;
    int a[b];
    cout << "enter the elements of the array: ";
    
    for(int i=0 ; i < b ; i++ ){
        cin >> a[i];
    }
    sort(a,b);
}