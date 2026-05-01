int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int n = a.size();
    int left = 0, right = 0;
    long long sum = a[0];
    int maxlen = 0;

    while(right < n){
        while(left <= right && sum > k){
            sum -= a[left];
            left++;
        }

        if(sum == k){
            int l = right - left + 1;
            maxlen = max(maxlen, l);
        }
        
        right++;
        if(right < n) {
            sum += a[right];
        }
        
    }
    return maxlen;
}





#include<bits/stdc++.h>

int longestSubarrayWithSumK(vector<int> a, long long k) {
    
    unordered_map<long long,int> Hmap;
    long long sum = 0;
    int maxlen = 0;
    int n = a.size();

    for(int i = 0; i<n; i++){
        sum += a[i];

        if(sum == k){
            maxlen = max(maxlen,i+1);
        }

        long long rem = sum - k;

        if(Hmap.find(rem) != Hmap.end()){
            int len = i - Hmap[rem];
            maxlen = max(maxlen, len);
        }

        if(Hmap.find(sum)  == Hmap.end()){
            Hmap[sum] = i;
        }
    }
    return maxlen;
}
