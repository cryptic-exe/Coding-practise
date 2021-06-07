#include<bits/stdc++.h>

using namespace std;

int main(){
    int curr = 0, n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
        for (int i = 0; i < n; i++)
        {
            curr = 0; //In starting current sum should be zero
            for (int j = i; j < n; j++)
            {
                curr += arr[j];
                cout << curr << endl;
            }
        }
        return 0;
}