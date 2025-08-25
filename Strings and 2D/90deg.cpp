#include<iostream>
using namespace std;

int rotate(int a[3][3]){
    for(int i=0;i<3;i++){   //transpose//
        for(int j=i;j<3;j++){
            swap(a[i][j],a[j][i]);
        }
    }


    for(int i=0; i<3; i++){   //reverse all rows//
        int left=0, right=3-1;
        while (left<right)
        {
            swap(a[i][left],a[i][right]);
            right--;
            left++;
        }
        
    }
}

int main(){
    int a[3][3];
    cout << "enter ur elements for array: ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cin >> a[i][j];
    }
    }

    cout << "origanal elements :" << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
         cout << a[i][j] << " ";
        }
        cout << endl;
    }
    rotate(a);

    cout<< "array after rotation : " << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
         cout << a[i][j] << " ";
        }
        cout << endl;
    }
}