int subarraySum(vector<int>& nums, int k) {
        int cnt{}, sum{};
        unordered_map<int, int> hash_table{};
        hash_table[0]++;
        for (auto num:nums){
            sum += num;
            cnt += hash_table[sum-k];
            ++hash_table[sum];            
            
        }
        return cnt;
        
}
