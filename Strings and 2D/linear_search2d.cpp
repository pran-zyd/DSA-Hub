#include<iostream>
using namespace std;


int search(int arr[][4],int a, int k){
    for(int i=0; i<a;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==k){
                return k;
            }
        }
    }
    return 0;
}

int main(){
    int a;
    cout << "enter row and column: ";
    cin >> a ;
    int arr[a][4];
    cout << "enter the elements of the array: ";
    for(int i=0; i<a; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<a ; i++){
        for(int j=0;j<4;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "enter the element u want to search: ";
    int k;
    cin >> k;
    int found;
    found=search(arr,a,k);
    cout << found;
}