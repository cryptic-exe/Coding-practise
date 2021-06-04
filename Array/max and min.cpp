#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,maxNO=INT_MIN,minNO=INT_MAX;
    cout << "Enter limit: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        maxNO = max(maxNO, arr[i]);
        minNO = min(minNO, arr[i]);
    }
    cout << "Max :" << maxNO << "\t"
         << "Min :" << minNO << endl;
    return 0;
}