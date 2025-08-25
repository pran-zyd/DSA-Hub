#include<iostream>
using namespace std;

int sort(int a[], int b){
    for(int i=0;i<b-1;i++){
        int min=i;
        for(int j=i+1;j<b;j++){
            if(a[j]<a[min]){
                min=j;
            }
               
        }
        swap(a[min],a[i]);
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

    sort(a,b);

    cout << "sorted array";
    for(int i=0;i<b;i++){
        cout << a[i] << " ";
    }
}