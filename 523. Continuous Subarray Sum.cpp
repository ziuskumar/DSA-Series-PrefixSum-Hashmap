class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        unordered_map<int, int> mpp;
        int n = nums.size();
        mpp[0] = -1;

        int sum = 0;

        for(int i=0; i<n; i++){
            sum += nums[i];

            int rem = sum % k;
            if(rem <0) rem += k;

            if(mpp.find(rem) != mpp.end()){
                if(i - mpp[rem] >= 2){
                    return true;
                }
            }
            else{
                mpp[rem]  = i;
            }
        }
        return false;

    }
};



class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int sum = nums[i];

            for(int j = i + 1; j < n; j++){   // length ≥ 2
                sum += nums[j];

                if(sum % k == 0){
                    return true;
                }
            }
        }

        return false;
    }
};
