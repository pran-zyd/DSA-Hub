#include<iostream>
using namespace std;
   

int main(){
    int b;
    cout << "enter the size of array" << endl;
    cin >> b;
    int a[b];

    cout << "enter the elements of the array " << endl;
    for (int i=0;i<b;i++){
        cin >> a[i];
    }

    int c;
    cout << "enter the size of 2nd array" << endl;
    cin >> c;
    int d[c];

    cout << "enter the elements of the 2nd array " << endl;
    for (int i=0;i<c;i++){
        cin >> a[i];
    }


    for(int i=0 ; i<b ; i++){
        for(int j=0 ; j<c ;j++){
            if(a[i]=d[j]){
                cout << d[j];
                d[j]=INT16_MIN;
                break;
            }
        }
    }

}