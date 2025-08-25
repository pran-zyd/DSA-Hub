#include<iostream>
using namespace std;
int main(){
    int a[6];
    cout << "enter ur values";
    for(int i=0;i<6;i++){
        cin >> a[i];
    }

    int min=a[0];
    for(int i=0;i<6;i++){
        if(min>a[i]){
            min = a[i];
        }
    }

    int max = a[0];
    for(int i=0;i<6;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    cout << "minimum value is" << min << endl;
    cout << "maximum value is" << max;
}
