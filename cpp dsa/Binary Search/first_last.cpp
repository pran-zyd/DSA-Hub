#include<iostream>
using namespace std;

int fo(int a[],int b,int key){
    int s = 0;
    int e = b-1;
    int mid;
    int ans=-1;
    while (s<=e){
        mid = (s+e)/2;
        if(a[mid] == key){
            ans=mid;
            e=mid -1;
        
        }
        else if(key > a[mid]){
            s=mid+1;
        }
        else if(key < a[mid]){
            e=mid-1;
        }
    }
    return ans;
}


int lo(int a[],int b,int key){
    int s = 0;
    int e = b-1;
    int mid;
    int ans=-1;
    while (s<=e){
        mid = (s+e)/2;
        if(a[mid] == key){
            ans=mid;
            s=mid+1;
        
        }
        else if(key > a[mid]){
            s=mid+1;
        }
        else if(key < a[mid]){
            e=mid-1;
        }
    }
    return ans;
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
    int key;
    cout << "enter the key";
    cin >> key;
    cout << "first occurance at index : " << fo(a,b,key) << endl;
    cout << "last occurance at index : " << lo(a,b,key);
   
}