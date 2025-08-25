#include<iostream>
using namespace std;

int wave(int a[3][3]){
    for(int j=0;j<3;j++){
        if(j%2==0){
            for(int i=0;i<3;i++){
                cout << a[i][j] << " ";
            }
        }
        else{
            for(int i=3-1;i>=0;i--){
                cout << a[i][j] << " ";
            }
        }
    }
}

int main(){
    int a[3][3];
    cout << "enter the elements of the array: ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> a[i][j];
        }
    }
    wave(a);
}