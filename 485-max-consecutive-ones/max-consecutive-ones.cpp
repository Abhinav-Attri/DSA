class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max {};
        int sum {};
        int n = nums.size();

        for(int i {}; i < n; i++){
            if(nums[i] == 1){
                sum++;
            }else{
                if(sum > max){
                    max = sum;
                }
                sum = 0;
            }
        }

        if(sum > max){
            max = sum;
        }

        return max;
    }
};