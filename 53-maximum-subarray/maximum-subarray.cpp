class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Max_Sum = INT_MIN, curr_sum {0};

        for(int val : nums){
            curr_sum += val;
            Max_Sum = max(curr_sum, Max_Sum);

            if(curr_sum < 0) {
                curr_sum = 0;
            }
        }

        return Max_Sum;
        
    }
};