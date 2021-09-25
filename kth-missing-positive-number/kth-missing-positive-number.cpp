class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int j=0,i=1,v=arr.size();
        while(k>0&&j<v){
            if(arr[j]!=i){
                k--;
            }
            else
                j++;
        i++;
        }
        if(k==0)
            return i-1;
        else 
            return i+k-1;
    }
};