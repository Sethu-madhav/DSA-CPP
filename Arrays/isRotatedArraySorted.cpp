// leetcode 1752
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; ++i)
        {
            if (nums[i] > nums[(i + 1) % n])
            {
                count++;
            }
        }
        return count <= 1;
    }
};

void printVector(vector<int> &vc)
{
    for (auto it : vc)
        cout << it << " ";
    cout << endl;
}

int main()
{
    Solution solution;
    vector<int> nums = {6, 3, 4, 5, 1, 2};
    cout << "List : ";
    printVector(nums);
    bool result = solution.check(nums); // should return true
    cout << "can sort after rotation? : " << result ? "true" : "false";
    return 0;
}