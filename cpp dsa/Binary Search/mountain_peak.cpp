#include<iostream>
using namespace std;
int bs(int a[],int b){
    int mid;
    int s=0;
    int e=b-1;
    while(s<=e){
        mid=(s+e)/2;
        if(a[mid]>a[mid+1]&&a[mid]>a[mid-1]){
            return mid;
        }
        if(a[mid] < a[mid+1]){
            s=mid+1;
        }
        if(a[mid] < a[mid-1]){
            e=mid-1;
        }
}
}


int main(){
    int b;
    cout << "enter the size of array : ";
    cin >> b;
    int a[b];
    cout << "enter the elements of the arrays : ";
    for(int i=0;i<b;i++){
        cin >> a[i];
    }
    cout << "Max elements index is : " << bs(a,b); 
}
 