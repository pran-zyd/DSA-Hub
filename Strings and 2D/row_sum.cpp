#include<iostream>
using namespace std;

int sum(int arr[3][3]){
    int ans=INT16_MAX;
    int rmax;
     for(int i=0; i<3;i++){
        int s =0;
        for(int j=0;j<3;j++){
            s=s+arr[i][j];
        }
        if(ans<s){
            ans=s;
            rmax=i+1;
        }
    }
    cout <<"the largest sum is in row"<< rmax << "and sum is" << ans;
}

int main(){
    int arr[3][3];
    cout << "enter the elements of the array: ";
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin >> arr[i][j];
    }
   }
   sum(arr);

}