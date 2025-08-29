#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int slg(vector<int>&arr,int b){
    int lg=INT16_MIN;
    int slg=INT16_MIN;
    for(int i=0;i<b;i++){
        if(arr[i]>lg){
            slg=lg;
            lg=arr[i];
        }
        else if(arr[i]>slg && arr[i]<lg){
            slg=arr[i];
        }
    }
    if(slg==INT16_MIN){
        return -1;
    }
    return slg;
}

int main(){
    int b;
    cout << "enter the size of the array: ";
    cin >> b;
    vector<int> arr(b);
    cout << "enter the elements of the arrays: ";
    for(int i=0;i<b;i++){
        cin >> arr[i];
    }
    int secondl;
    secondl=slg(arr,b);
    cout << secondl;
}   