#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printVector(vector<int> &arr)
{
    for (auto it : arr)
        cout << it << " ";
}

int main()
{

    vector<int> arr = {7, 3, 9, 1, 4, 5, 2};

    cout << "Array before sort : ";
    printVector(arr);

    insertionSort(arr);

    cout << endl;

    cout << "Array after sort : ";
    printVector(arr);
}