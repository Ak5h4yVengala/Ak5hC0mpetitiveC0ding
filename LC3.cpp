class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        if (s.length() == 0)
            return 0;
        int n = s.length();
        set<char> st;
        int len = 1;
        st.insert(s[0]);
        int i = 1;
        int maxLen = 0;
        while (i < n)
        {
            if (s[i] != s[i - 1] && st.find(s[i]) == st.end())
            {
                st.insert(s[i]);
                len++;
                i++;
                if (len > maxLen)
                {
                    maxLen = len;
                }
            }
            else
            {
                if (len == 1)
                {
                    i++;
                }
                else
                {
                    st.clear();
                    i = i - len + 1;
                    len = 0;
                }
            }
        }
        return max(maxLen, len);
    }
};