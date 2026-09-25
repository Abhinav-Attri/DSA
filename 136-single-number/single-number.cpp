class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int first_val {0};

        for(int val : nums){
            first_val ^= val;
        }

        return first_val;

    }
};