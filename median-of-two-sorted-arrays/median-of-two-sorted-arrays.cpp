class Solution {
public:
    double findMedianSortedArrays(vector<int>& v1, vector<int>& v2) {
        v1.insert(v1.end(),v2.begin(),v2.end());
        sort(v1.begin(),v1.end());
        double result;
        int n = v1.size()-1;
        if(n%2!=0) {
            result  = (v1[n/2]+v1[(n/2)+1])/2.0;
            return result;
        }
        else{
            return v1[n/2];
        }
    return 0;
    }
};