#include<iostream>
using namespace std;
int main(){
    int b;
    cout << "enter size of array: " << endl;
    cin >> b;
    int a[b];
    cout << "enter value of elements : ";
    for(int i=0;i<b;i++){
        cin >> a[i];
    }
    int sum=0;
    for(int i=0;i<b;i++){
        sum=sum+a[i];
    }

    cout << endl << "sum of arrays are : " << sum;


}