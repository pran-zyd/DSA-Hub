#include<iostream>
using namespace std;

int rotate(int a[],int b,int k){
    int temp[b];
    for(int i=0; i<b; i++){
        temp[(i+k)%b]=a[i];
    }

    for(int i=0;i<b;i++){
        temp[i]=a[i];
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
    int k;
    cin >> k;
    rotate(a,b,k);
}
