class Solution {
public:
    int search(vector<int>& nums, int target) {
        int length = nums.size();
        int beginning = 0;
        int end = length-1;
        int mid = 0;
        
        while(beginning <= end){
            mid = beginning + (end - beginning) / 2;
            if(nums[mid] == target){
                return mid;
            }
            else if (nums[mid] < target){
                beginning = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        
        return -1;
    }
};