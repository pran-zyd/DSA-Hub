#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>d;

    d.push_back(3);
    d.push_front(4);    
    d.erase(d.begin(),d.begin()+1);
    cout << d.at(0);

    
    
}