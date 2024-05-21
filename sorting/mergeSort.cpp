#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void merge(vector<int> &arr, int low, int mid, int high)
{

    int left = low;
    int right = mid + 1;
    vector<int> temp;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high)
{

    if (low >= high)
        return;
    int mid = low + (high - low) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

void printArray(vector<int> &arr)
{
    for (auto it : arr)
        cout << it << " ";
}

int main()
{
    fast_cin();
    vector<int> arr = {7, 3, 8, 1, 4, 5, 2, 6};
    int n = arr.size() - 1;

    cout << "Array before sort : ";
    printArray(arr);

    mergeSort(arr, 0, n);

    cout << endl;

    cout << "Array after sort : ";
    printArray(arr);
}