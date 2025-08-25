#include<iostream>
using namespace std;
int al(int a[],int b){
        int f=0;
        int s=1;
        while(s<b){
            swap(a[f],a[s]);
            f=f+2;
            s=s+2;
        }
}

int all(int a[],int b){
    for(int i=0;i<b;i+=2){
        if(i+1<b){
            swap(a[i],a[i+1]);
        }
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
        cout << a[i] << " ";}

        all(a,b);

     cout << "alterante array: ";
    for (int i=0;i<b;i++){
        cout << a[i] << " ";
    }


}
