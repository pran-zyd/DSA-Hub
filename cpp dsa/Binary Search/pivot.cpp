#include<iostream>
using namespace std;

int bs(int a[],int b){

    int s = 0;
    int e = b-1;
    int mid ;
    while(s<e){
        mid = (s+e)/2;
        if(a[mid]>=a[0]){
            s=mid +1;
        }
        else{e=mid;}

    }
    return s;
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
 