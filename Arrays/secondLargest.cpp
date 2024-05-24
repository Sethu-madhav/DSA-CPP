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

int secondLgNum(vector<int> &vc)
{
    if (vc.size() == 0)
        return -1;
    if (vc.size() == 1)
        return vc[0];
    int lgNum = vc[0];
    int secNum = INT_MIN;

    for (auto it : vc)
    {
        if (it > lgNum)
        {
            secNum = lgNum;
            lgNum = it;
        }
        else if (it != lgNum && it > secNum)
        {
            secNum = it;
        }
    }
    return secNum;
}

int main()
{
    fast_cin();
    vector<int> arr = {1, 2, 4, 7, 7, 5};
    cout << "Array elements : ";
    printArray(arr);
    int result = secondLgNum(arr);
    cout << "second largest num : " << result;
    return 0;
}