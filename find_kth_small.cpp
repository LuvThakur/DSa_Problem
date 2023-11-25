#include <iostream>
using namespace std;
//  quick sort

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    for (int j = low + 1; j <= high; j++)
    {

        if (pivot > arr[j])
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[i]);
    return i;
}

int kthSmallest(int arr[], int low, int high, int k)
{
    if (k > 0 && k <= high - low + 1)
    {
        int pivot = partition(arr, low, high);
        cout << "ks_ " << k;
        if (pivot - low == k - 1)
            return arr[pivot];
        if (pivot - low > k - 1)
            return kthSmallest(arr, low, pivot - 1, k);
        return kthSmallest(arr, pivot + 1, high, k - (pivot - low + 1));
    }
    return -1; // This can be used to handle an out-of-range k value.
}

// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

int main()
{
    int k, i, size = 8;
    cout << "Enter size\n";
    cin >> k;

    int arr[size] = {73, 188, 894, 915, 940, 616, 900, 548};

    cout << kthSmallest(arr, 0, size, k);
}