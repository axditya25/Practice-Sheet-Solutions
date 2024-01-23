#include <iostream>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {

        int i = 0, j = 0;
        int a[256] = {0};
        int ans = 0;
        if (s.size() == 0)
        {
            ans = 1;
        }

        while (i < s.size() && j < s.size())
        {

            int indx = int(s[j]);

            if (a[indx] == 0)
            {
                a[indx]++;
                ans = max(ans, j - i + 1);
                j++;
            }
            else if (a[indx] == 1)
            {

                if (int(s[i]) == indx)
                {
                    i++;
                    ans = max(ans, j - i + 1);
                    j++;
                }
                else
                {
                    a[int(s[i])]--;
                    i++;
                }
            }
            // ans = max(ans,j-i+1);
        }

        if (s.size() == 0)
        {
            ans = 0;
        }

        return ans;
    }
};