
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

int missingNumber(vector<int> &nums)
{
    int expSum = 0;
    for (int i = 1; i <= nums.size(); i++)
        expSum += i;
    int arrSum = 0;
    for (auto num : nums)
        arrSum += num;
    return expSum - arrSum;
}

int main()
{
    vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    cout << "Array : ";
    printArray(nums);
    int result = missingNumber(nums);
    cout << "Missing number : " << result;
    return 0;
}