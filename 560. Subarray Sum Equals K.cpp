class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int n = nums.size();
        unordered_map<int, int> mpp;
        int sum = 0, cnt = 0;
        mpp[0] = 1;

        for(int i=0; i<n; i++){
            sum += nums[i];

            int rem = sum - k;
            cnt += mpp[rem];
            mpp[sum] += 1;
        }
        return cnt;
    }
};











// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
        
//         int n = nums.size();
//         int sum = 0;
//         int maxlen = 0;
//         unordered_map<int,int> hmap;

//         for(int i=0; i<n; i++){
//             sum += nums[i];

//             if(sum == k){
//                 maxlen = i + 1;
//             }

//             int rem = sum - k;

//             if(hmap.find(rem) != hmap.end()){
//                 int len = i - hmap[rem];
//                 maxlen = max(maxlen, len);
//             }

//             if(hmap.find(sum) == hmap.end()){
//                 hmap[sum] = i;
//             }
//         }
//         return maxlen;
//     }
// };




















// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
        
//         int n = nums.size();
//         int cnt = 0;

//         for(int i=0; i<n; i++){
//             int sum = 0;

//             for(int j=i; j<n; j++){
//                 sum += nums[j];

//                 if(sum == k){
//                     cnt++;
//                 }
//             }

            
//         }
//         return cnt;
//     }
// };
