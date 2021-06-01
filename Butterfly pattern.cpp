/*
n=4

*     *
**   **
*** ***
*******
*******
*** ***
**   **
*     *

*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

//loop to print above shape

    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= (n * 2);j++){
            if((j>i & j<=((2*n)-i))){ //i think this is best formula to print spaces 
                cout << " ";
            }
            else {
                cout <<"*";
            }
        }
        cout << endl;
    }

    //loop to print below shape

    for (int i = n; i >= 1;i--){
        for (int j = 1; j <= (n * 2);j++){
            if((j>i & j<=((2*n)-i))){ //i think this is best formula to print spaces 
                cout << " ";
            }
            else {
                cout <<"*";
            }
        }
        cout << endl;
    }

        return 0;
}