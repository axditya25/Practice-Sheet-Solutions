#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int ans = nums[0];
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i + 1] < nums[i])
            {
                ans = nums[i + 1];
                break;
            }
        }

        return ans;
    }
};

class Solution_Optimised
{
public:
    int findMin(vector<int> &nums)
    {
        int ans = nums[0];
        int s = 0, e = nums.size() - 1;
        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (nums[mid] < ans)
            {
                ans = nums[mid];
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return ans;
    }
};
