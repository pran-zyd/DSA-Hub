#include<iostream>
using namespace std;

int bin(int a[],int b,int key){
    int mid;
    int s=0;
    int e=b-1;

    while(s<=e){
        mid=(s+e)/2;
        if(a[mid]==key){
            return mid;
        }
        if(a[mid]>key){
            s=mid+1;
        }
        else{e=mid-1;}
        }
    }

int main(){
    int b;
    cout << "enter the size";
    cin >> b;
    int a[b];
    cout << "enter the elements of the elements";
    for(int i=0;i<b;i++){
        cin >> a[i];
    }
    cout << "enter the element to be found";
    int key;
    cin >> key;
    bin(a,b,key);

}