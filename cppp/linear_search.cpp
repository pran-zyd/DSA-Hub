#include<iostream>
using namespace std;

bool search (int a[],int s,int f){
    
    for(int i=0;i<s;i++){
        if(a[i]==f){
            return 1;
        }
    }
    return 0;
}

int main(){
    int b;
    cout << "enter the size of element : "<< endl;
    cin >> b;
    int a[b];
    cout<< "enter the elements : "<< endl;

    for(int i=0;i<b;i++){
        cin >> a[i];
    }

    int f;
    cout << "enter the value need to be found :" << endl;
    cin >> f;
    
    bool found = search(a,b,f);
    if(found){
        cout << "found";
    }
    else{cout << "not found";}
}