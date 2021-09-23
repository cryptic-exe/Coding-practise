class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0,right=nums.size()-1,index = nums.size()-1;
        vector<int> ans(nums.size());
        while(left<=right){
            int val1 = nums[left]*nums[left];
            int val2 = nums[right]*nums[right];            
            if(val1<val2){
                ans[index] = val2;
                right--;
           
             }
            else{
                ans[index] = val1;
                left++;
                
            }
               index--; 
        }
    return ans;
    }
};