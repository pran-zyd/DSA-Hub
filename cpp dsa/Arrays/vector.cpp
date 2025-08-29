#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    cout << "size: " << v.capacity();

    v.push_back(1);
    v.push_back(3);
    v.push_back(4);

    cout << "elemnts are:";
    for(int i:v){
        cout<<i<<" ";
    }
}