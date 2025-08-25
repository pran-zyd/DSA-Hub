#include<iostream>
using namespace std;

int check(int a[],int b){
    int ans;
    for(int i=0 ; i<b ; i++){
        ans = ans^a[i];
}
return ans;
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
   
    int ans=check(a,b);
    cout << ans;
}    