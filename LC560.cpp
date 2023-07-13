int subarraySum(vector<int> &nums, int k)
{
    vector<int> psum;
    int sum = 0;
    int ans = 0;
    unordered_map<int, int> f;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        psum.push_back(sum);
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (psum[i] == k)
            ans++;

        if (f.find(psum[i] - k) != f.end())
        {
            ans += f[psum[i] - k];
        }
        f[psum[i]]++;
    }
    return ans;
}