#include<iostream>
using namespace std;

int SI(int a[], int b, int key){
    int mid;
    int s=0;
    int e=b-1;
    int ans;
    while(s<=e){
        mid=s+(e-s)/2;

        if(a[mid]==key){
            return mid;
        }

        else if(a[mid]>key){
            e=mid-1;
        }

        else {
            s=mid+1;
        }

    }
    return s;
    
}
 

int main(){
    int b;
    cout << "enter the size of element: ";
    cin >> b;

    int a[b];
    cout << "enter the elements of the array: ";
    
    for(int i=0;i<b;i++){
        cin >> a[i];
    }

    int key;
    cout << "enter the required element: ";
    cin >> key;
    cout << SI(a,b,key);
}