#include<iostream>
using namespace std;

int reverse(int a[],int b){
    int start=0;
    int end = b-1;
    while(start<end){
        swap(a[start],a[end]);
        start++;
        end--;
    }
}

int main(){
    int b;
    cout << "enter the size of array" << endl;
    cin >> b;
    int a[b];

    cout << "enter the elements of the array " << endl;
    for (int i=0;i<b;i++){
        cin >> a[i];
    }
    cout << endl << "real array: ";
    for (int i=0;i<b;i++){
        cout << a[i] << " ";

    }

   
    reverse(a,b);


   cout << "reversed array: ";
    for (int i=0;i<b;i++){
        cout << a[i] << " ";
}
}