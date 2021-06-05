#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int loc = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[loc] > arr[j])
                loc = j; // update location to new most-extreme value
        }

        // only need to swap if the location is no longer same as i
        if (loc != i)
            swap(arr[loc], arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}