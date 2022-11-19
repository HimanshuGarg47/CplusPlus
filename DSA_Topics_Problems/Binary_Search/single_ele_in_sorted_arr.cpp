#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // count number of elements at each side [1,1,3,3,4] mid is 2 -> so right side is elements are 1
    // excluding 3
    int singleNonDuplicate(vector<int> &nums)
    {

        int mid, low = 0, high = nums.size() - 1;

        while (low < high)
        {
            mid = (low + high) / 2;
            if ((high - mid) % 2 == 0)
            {
                if (nums[mid] != nums[mid + 1])
                    high = mid;
                else
                    low = mid;
            }
            else
            {
                if (nums[mid] != nums[mid + 1])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
        return nums[low];
    }

//  for each pair, 
// first element takes even position and second element takes odd position
// for example, 1 is appeared as a pair,
// so it takes 0 and 1 positions. similarly for all the pairs also.

// this pattern will be missed when single element is appeared in the array.
    int singleNonDuplicate(vector<int> &nums)
    {
        int left = 0, right = nums.size() - 1;
        while (left < right)
        {
            int mid = (left + right) / 2;
            if ((mid % 2 == 0 && nums[mid] == nums[mid + 1]) || (mid % 2 == 1 && nums[mid] == nums[mid - 1]))
                left = mid + 1;
            else
                right = mid;
        }

        return nums[left];
    }
};

int main()
{
}