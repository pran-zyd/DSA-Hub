
 #include<iostream>
using namespace std;

bool prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 1;
        }  
    }
     return 0;
}

int main(){
    int m,n;
    cout << "enter your number : ";
    cin >> m;
    n=prime(m);
    if(n=1){
        cout << "number is not prime ";
    }
    else{cout << "number is prime";}

}