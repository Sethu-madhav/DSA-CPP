
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