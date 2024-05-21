#include <iostream>
#include <vector>
using namespace std;
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int partition(vector<int> &vc, int low, int high)
{
    int pivot = vc[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (vc[i] <= pivot && i <= high - 1)
            i++;
        while (vc[j] > pivot && j >= low + 1)
            j--;
        if (i < j)
            swap(vc[i], vc[j]);
    }
    swap(vc[j], vc[low]);
    return j;
}

void quickSort(vector<int> &vc, int low, int high)
{
    if (low >= high)
        return;
    int pIndex = partition(vc, low, high);
    quickSort(vc, low, pIndex - 1);
    quickSort(vc, pIndex + 1, high);
}

void printArray(vector<int> &vc)
{
    for (auto it : vc)
        cout << it << " ";
    cout << endl;
}

int main()
{
    fast_cin();
    vector<int> vc = {5, 1, 3, 6, 7, 2, 8, 4};
    int n = vc.size() - 1;

    cout << "Original Array : ";
    printArray(vc);

    quickSort(vc, 0, n);

    cout << "Sorted Array : ";
    printArray(vc);
}