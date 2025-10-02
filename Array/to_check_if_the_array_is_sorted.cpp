class Solution {
public:
    bool isSorted(vector<int>& arr) {
        int n = arr.size();
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[i - 1]) {
                 return false;
            
            }
               
        }
        return true; 
    }
};

// leetcode 1752 if array is sorted + rotated

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count  = 0;
        for (int i =0;i <n;i++){
            if(nums[i] > nums[(i+1)%n]){
                count ++;
            }
            if (count >1)return false;
            
        }return true;
    }
};
