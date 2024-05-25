
#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr)
{
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
}

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int count = 0;
    int maxCount = 0;
    for (auto it : nums)
    {
        if (it != 0)
            count++;
        if (it == 0)
        {
            maxCount = max(count, maxCount);
            count = 0;
        }
    }
    maxCount = max(count, maxCount);
    return maxCount;
}

int main()
{
    vector<int> nums = {1, 1, 0, 1, 0, 1, 1, 1};
    cout << "Array : ";
    printArray(nums);
    int result = findMaxConsecutiveOnes(nums);
    cout << "Max consecutive 1's : " << result;
    return 0;
}