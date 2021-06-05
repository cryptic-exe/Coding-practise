#include<bits/stdc++.h>

using namespace std;

void SelectionSort(int arr[],int n){
    
    for (int i = 0; i < n - 1; i++)
    {
        int loc = i;
        for (int j = i + 1; j < n; j++)
        {
            if(arr[]>arr[j]){
                loc = j;
                min = arr[j];
            }
            swap(arr[loc],arr[i]);
        }
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool BinarySearch(int arr[],int n ,int key){
    // for (int i = 0; i < n;i++){
    //     cout << arr[i];
    // }
}

int main(){
    int n,key;
    cin >> n;
    int arr[n];
    cout << "Enter Array elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    SelectionSort(arr, n);
    cout << endl
         << "Enter number to be search: ";
    cin >> key;
    bool result = BinarySearch(arr, n, key);
    if(result){
        cout << "Present" << endl;
    }
    else{
        cout << "Not Present" << endl;
    }
    return 0;
}