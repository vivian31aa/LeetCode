class Solution {
public:
   int ans = 0;
    vector<int> a;
    void dfs(int s, int mask)
    {
        ans = max(ans, __builtin_popcount(mask));
        for (int i = s; i < a.size(); i++)
        {
            if ((mask & a[i]) == 0)
            {
                dfs(i + 1, mask | a[i]);
            }
        }
    }

    int maxLength(vector<string> &arr)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            int mask = 0;
            for (int j = 0; j < arr[i].length(); j++)
            {
                mask |= 1 << arr[i][j] - 'a';
            }
            if (__builtin_popcount(mask) == arr[i].length())
                a.push_back(mask);
        }
        dfs(0,0);
        return ans;
    }
};