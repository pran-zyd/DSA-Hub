#include<iostream>
using namespace std;
int bs(int a[],int b,int key){
    int mid;
    int s=0;
    int e=b-1;
    while(s<=e){
        mid=(s+e)/2;
        if(a[mid]==key){
            return mid;
        }
        if(key>a[mid]){
            s=mid+1;
        }
        else{e=mid-1;}
    }
    return -1;
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

   int index = bs(a,b,18);
   cout << "index of 18 is" << index << endl;
}
 









