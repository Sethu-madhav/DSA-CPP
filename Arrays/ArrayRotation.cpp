#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void rotateArray(int arr[], int n, int d)
{

    int *temp = new int[d];
    for (int j = 0; j < d; j++)
    {
        temp[j] = arr[j];
    }

    for (int k = 0; k < n - d; k++)
    {
        arr[k] = arr[k + d];
    }

    for (int m = 0; m < d; m++)
    {
        arr[n - d + m] = temp[m];
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int key = 2, n = 5;
    cout << "Array before rotation : \n";

    printArray(arr, n);

    rotateArray(arr, n, key);

    cout << "Array after rotation : \n";
    printArray(arr, n);
}