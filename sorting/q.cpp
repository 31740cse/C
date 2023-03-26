#include <iostream>
using namespace std;
int fun(int *arr, int low, int high)
{
    int pivot = arr[low];
    int i = low, j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i < high)
            i++;
        while (arr[j] > pivot && j > low)
            j--;
        if (i < j)
            swap(arr[j], arr[low]);
    }
    swap(arr[j], arr[low]);
    return j;
}
void sort(int *arr, int low, int high)
{
    if (low < high)
    {
        int ind = fun(arr, low, high);
        sort(arr, low, ind - 1);
        sort(arr, ind + 1, high);
    }
}
int main()
{
    int arr[] = {9, 8, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}