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

int largestNum(vector<int> &vc)
{
    if (vc.size() == 0)
        return -1;
    if (vc.size() == 1)
        return vc[0];
    int lgNum = vc[0];
    for (auto it : vc)
    {
        if (lgNum < it)
            lgNum = it;
    }
    return lgNum;
}

int main()
{
    fast_cin();
    vector<int> arr = {5, 1, 3, 2, 4, 6};

    printArray(arr);
    int result = largestNum(arr);
    cout << "largest Num in array : " << result;
    return 0;
}