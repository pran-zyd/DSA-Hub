#include<iostream>
#include<vector>
using namespace std;

int lg(vector<int> &arr,int b){
    int lg=arr[0];
    for(int i=1;i<b;i++){
        if(lg<arr[i]){
            lg=arr[i];
        }
    }
    return lg;
}

int main(){
    int b;
    cout << "enter the size of the array: ";
    cin >> b;
    vector<int> arr(b);
    cout << "enter the elements of the array";
    for(int i=0;i<b;i++){
        cin >> arr[i];
    }
    int largest = lg(arr,b);
    cout << largest;
}