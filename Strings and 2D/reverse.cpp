#include<iostream>
using namespace std;

int reverse(char a[],int b){
    int s=0;
    int e=b-1;
    for(int i=0; i<b ; i++){
        while(s<e){
            swap(a[s],a[e]);
            s++;
            e--;

        }
    }
}

int len(char a[]){
    int count=0;
    for(int i=0;a[i]!=0;i++){
        count++;
    }
    return count;
}

int main(){
    char a[20];
    cout << "enter the string: ";
    cin >> a;

    int l = len(a );
    cout << l << endl;

    reverse(a,l);
    
    cout << a;
}