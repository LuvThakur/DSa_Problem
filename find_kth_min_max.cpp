#include <bits/stdc++.h>
using namespace std;
// 1 3 4 6
void kth_minfun(int p[], int k, int size)
{
    if (k < size)
        cout << k << "-th minimum in array " << p[k - 1]<<"\n";
    else
        cout << "\n min Not in range\n";
}

void kth_maxfun(int p[], int k, int size)
{
    if (k < size)
        cout << k << "-th maximum in array " << p[(size - 1) - (k - 1)]<<"\n";
    else
        cout << "\nmax Not in range\n";
}

int main()
{

    int *p, size = 6, k_max, k_min;
    int arr[] = {1, 5, 7, 4, 8, 3};

    p = new int(size);

    for (int i = 0; i < size; i++)
    {
        p[i] = arr[i];
    }

    sort(p, p + size);

    for (int i = 0; i < size; i++)
    {
        cout << " " << p[i];
    }

    cout << "\nEnter k_min \n";
    cin >> k_min;

    cout << "Enter k_max \n";
    cin >> k_max;

    kth_minfun(p, k_min, size);
    kth_maxfun(p, k_max, size);
}