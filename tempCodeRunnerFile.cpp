class Solution {
public:
    int BinSearch(vector<int>& nums, int left, int right, int target){
        while(left<=right){
            int mid = (right-left)/2+left;
            if(target>nums[mid]) return BinSearch(nums, mid+1, right, target);
            else if(target<nums[mid]) return BinSearch(nums, left, mid-1,target);
            else return mid;
        }
        return -1;
    }
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size();
        if(target>nums[len-1]) return len;
        if(target<nums[0]) return 0;
        int n = BinSearch(nums,0,len-1,target);
        if(n<0){
            for(int i = 0; i<len-1;i++){
                if(target > nums[i] && target < nums[i+1]) return i+1;
            }
        }
        return n;
    }
};