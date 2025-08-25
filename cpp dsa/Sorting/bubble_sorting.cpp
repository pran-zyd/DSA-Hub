#include<iostream>
using namespace std;

int bsort(int a[], int b){
    for(int i=0; i<b;i++){
        for(int j=0;j<b-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main(){
     int b;
    cout << "enter the size: ";
    cin >> b;
    int a[b];
    cout << "enter the elemnts of the array: ";
    for(int i=0;i<b;i++){
        cin >> a[i];
    }
    bsort(a,b);

    cout << "sorted array";
    for(int i=0;i<b;i++){
        cout << a[i] << " ";
    }

}