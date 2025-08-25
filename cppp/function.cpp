/*#include<iostream>
using namespace std;
int power(int a, int b){
    int ans = 1;
    for(int i=1; i<=b; i++){
        ans = ans * a;
    }
    return ans;
}

int main(){
    int c,d,e;
    cout << "enter number and power";
    cin >> c >> d;
    e=power(c,d);
    cout << e;
}*/

//another way of writing;


#include<iostream>
using namespace std; 

int power(){
    int a,b,ans;
    ans =1;
    cin >> a >> b;
    for(int i=1 ; i<=b ; i++){
         ans = ans * a;
    }
    return ans;
}

int main(){
    int b = power();
    cout << b;

}