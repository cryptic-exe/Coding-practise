/*

if n=5

*****
****
***
**
* 
*/

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = n; i >= 1;i--) // or you can run this loop i to 5 
    {
        for (int j = 1; j <= i;j++) //this loop 1 to j=<(n-i+1)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}