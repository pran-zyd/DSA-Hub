#include<iostream>
using namespace std;

int square(int a[],int b,int n){
    int s=0;
    int e=b-1;
    int mid;
    int ans = -1;
    while(s<e){
        if(mid*mid==n){
            ans=mid;
            return ans;
        }
        if(mid*mid > n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
    }
    return ans ;
}