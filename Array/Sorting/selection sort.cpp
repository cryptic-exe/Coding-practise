#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int loc,min;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1;i++){
        min = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if(min>arr[j]){
                min = arr[j];
                loc = j;
            }
            swap(arr[loc],arr[i]);
        }
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}