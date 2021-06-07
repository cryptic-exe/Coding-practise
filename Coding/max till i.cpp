#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,mx;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array is :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
    mx = arr[0];
    for (int i = 0; i < n; i++){
        mx = max(mx, arr[i]);
        cout << "Max number till " << arr[i] << " is " << mx << endl;
    }

        return 0;
}