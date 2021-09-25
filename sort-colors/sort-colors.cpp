class Solution {
public:
    void sortColors(vector<int>& A) {
        int low=0,mid=0,high=A.size()-1;
        while(mid<=high){
            switch(A[mid]){
                case 0 :swap(A[mid],A[low]);
                        mid++;low++;
                        break;
                case 1 :mid++;
                        break;
                case 2:swap(A[high],A[mid]);
                        high--;
                        break;
            }
        }
    }
};