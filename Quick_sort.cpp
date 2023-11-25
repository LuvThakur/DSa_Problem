#include <iostream>
using namespace std;

int partition(int *arr, int low, int high)
{
    int pivot = arr[low];
    // int k = high;
    int j = low;
    int i;
    // 13   5    6  15    14     19
    //  13   5    6  14    15     19
    for (i = low + 1; i <= high; i++)
    {
        if (pivot > arr[i])
        {
            j++;
            swap(arr[i], arr[j]);
            // k--;
        }
    }
    // swap(arr[low], arr[k]);
    swap(arr[low], arr[j]);

    return j;
}

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int index = partition(arr, low, high);
        quicksort(arr, low, index - 1);
        quicksort(arr, index + 1, high);
    }
}

void print(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << a[i];
    }
}
int main()
{

    int size, i;
    cout << "Enter size\n";
    cin >> size;
    int *p = new int(size);

    for (i = 0; i < size; i++)
    {
        cin >> p[i];
    }

    // sorting

    quicksort(p, 0, size);

    print(p, size);

    delete p;
}