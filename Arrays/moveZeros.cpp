// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.
// Example 1:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
// Example 2:

// Input: nums = [0]
// Output: [0]

// ---- Solution ----
// Move non elements to front and then add 0's at last

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

void moveZeroes(vector<int> &nums)
{
    int j = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            nums[j++] = nums[i];
        }
    }
    for (; j < nums.size(); j++)
        nums[j] = 0;
}

int main()
{

    vector<int> nums = {0, 1, 0, 2, 0, 3, 5};

    cout << "Array before : ";
    printArray(nums);
    moveZeroes(nums);
    cout << "Array after : ";
    printArray(nums);
    return 0;
}