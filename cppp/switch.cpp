/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    switch(n){
        case 1 : cout << "1";
            break;

        case 2 : cout  << "2\n";
        

        case 3 : cout << "3\n";
       

        default : cout << "Default";
             
    }

}*/

#include<iostream>
using namespace std;
int main(){
    int n,h,f;
    int a;
    cout << "enter your amount";
    cin >> a;
    cout << "enter the type of note";
    cin >> n;

    switch (n)  {
        case 100: h = a/100;
                cout << h;

            
        case 50: f = a-(h*100);
                f=f/50;
                cout << f; 
                            
    }
}