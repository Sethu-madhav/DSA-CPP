#include <iostream>
#include <vector>
using namespace std;
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void printArray(vector<int> arr)
{
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
}

int removeDuplicates(vector<int> &nums)
{
    int j = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[i - 1])
        {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}

int main()
{

    vector<int> nums = {0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 5};
    int newSize = removeDuplicates(nums);
    cout << "New size: " << newSize << endl;
    for (int i = 0; i < newSize; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}