#include <iostream>
#include <vector>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    // Your code here
    // return vector with correct order of elements
    vector<int> temp;
    int i = 0, j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            if (temp.size() == 0 || temp.back() != arr1[i])
            {
                temp.push_back(arr1[i]);
            }
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            if (temp.size() == 0 || temp.back() != arr2[j])
            {
                temp.push_back(arr2[j]);
            }
            j++;
        }
        else
        {
            if (temp.size() == 0 || temp.back() != arr1[i])
            {
                temp.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }
    while (i < n)
    {
        if (temp.size() == 0 || temp.back() != arr1[i])
        {
            temp.push_back(arr1[i]);
        }
        i++;
    }
    while (j < m)
    {
        if (temp.size() == 0 || temp.back() != arr2[j])
        {
            temp.push_back(arr2[j]);
        }
        j++;
    }

    return temp;
}

void printVector(vector<int> &vc)
{
    for (auto it : vc)
        cout << it << " ";
    cout << endl;
}

int main()
{
    int vc1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vc2[] = {2, 3, 4, 4, 5, 11, 12};

    int n = 10, m = 7;
    vector<int> resultVector = findUnion(vc1, vc2, n, m);

    cout << "Union of vc1 & vc2 : ";
    printVector(resultVector);
}