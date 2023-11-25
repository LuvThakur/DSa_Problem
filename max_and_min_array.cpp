#include <iostream>
using namespace std;

int main()
{

    int size = 5;

    int *p = new int[size];

    int max = INT16_MIN;
    int min = INT16_MAX;

    cout << "Enter value\n";
    for (int i = 0; i < size; i++)
    {
        cin >> p[i];
    }

    cout << "Enter value\n";

    for (int i = 0; i < size; i++)
    {

        if (max < p[i])
        {
            max = p[i];
        }

        if (min > p[i])
        {
            min = p[i];
        }
    }

    cout << "max " << max << " min " << min;
}