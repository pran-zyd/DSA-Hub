#include <iostream>
using namespace std;

void merge(int a1[],int n,int m,int a2[],int a3[]){
    int i=0;
    int j=0;
    int k=0;
    while(i<n&&j<m){
        if(a1[i]<a2[j]){
            a3[k]=a1[i];
            k++;
            i++;
        }
        else{
            a3[k]=a2[j];
            j++;
            k++;
        }
    }
    while(i<n){
        a3[k]=a1[i];
        i++;
        k++;
    }

    while(j<m){
        a3[k]=a2[j];
        j++;
        k++;
    }
}

int main()
{
    int b;
    cout << "enter the size of 1st the arrays: ";
    cin >> b;
    int a[b];
    cout << "enter the elements of the array: ";
    for (int i = 0; i < b; i++)
    {
        cin >> a[i];
    }


    int c;
    cout << "enter the size of the 2nd arrays: ";
    cin >> c;
    int e[c];
    cout << "enter the elements of the array: ";
    for (int i = 0; i < c; i++)
    {
        cin >> e[i];
    }

    int d=c+d;
    int f[d];

    merge(a,b,c,e,f);

    for(int i=0 ; i < d ; i++ ){
        cout << f[i] << " ";

}
}