class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int rotate_num = k%n;
        vector <int> temp = {};

        for(int i {n-rotate_num}; i<n; i++){
            temp.push_back(nums[i]);
        }

        for(int i{n-rotate_num-1}; i>=0; i--){
            nums[i+rotate_num] = nums[i];
        }

        for(int i{0} ; i < rotate_num; i++){
            nums[i] = temp[i];
        }
    }
};