#include<bits/stdc++.h>

//its time complexity is O(log base 2 N)

using namespace std;

int binarySearch(int arr[],int n,int key){

    int start = 0, end = n;
    while (start<=end){
        int mid = (start + end) / 2;
        if(key==arr[mid])
            return mid;
        else if(key>arr[mid]) //if key is bigger than mid element than shift ending point to mid-1 index
            end = mid - 1;
        else //if key is bigger than mid element than shift starting point to mid+1 index
            start = mid + 1;
    }
    return -1;
}

int main(){
    int n,key;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    cin >> key;
    cout << binarySearch(arr, n, key) << endl;
    return 0;
}