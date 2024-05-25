// Problem Statement: Given an array, and an element num the task is to find if num is present in the given array or not.
// If present print the index of the element or print -1.
// Example 1:
// Input: arr[]= 1 2 3 4 5, num = 3
// Output: 2
// Explanation: 3 is present in the 2nd index

// Example 2:
// Input: arr[]= 5 4 3 2 1, num = 5
// Output: 0
// Explanation: 5 is present in the 0th index

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

int linearSearch(vector<int> &nums, int key)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int key = 8;
    cout << "Array : ";
    printArray(nums);
    int result = linearSearch(nums, key);
    cout << key << " is at Index : " << result;
    return 0;
}