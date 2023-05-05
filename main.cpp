#include <iostream>
using namespace std;
int main() {

    int a=1, b=0, c=0, n;

    cin >> n;

    while( c<n){
        c=a+b;
        if(c<=n){
            cout << c << endl;
        }
        a=b;
        b=c;
    }
    return 0;
}
