#include <iostream>
using namespace std;

int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
int main()
{

    int size;

    cout << "Enter the Size\n";
    cin >> size;

    int *p = new int(size);

    for (int i = 0; i < size; i++)
    {
        cin >> p[i];
    }

    int maxE = 0, maxF = INT16_MIN;

    for (int i = 0; i < size; i++)
    {
        maxE = max(maxE + p[i], p[i]);
        maxF = max(maxE, maxF);
    }

    cout << "largest sum of subbaray " << maxF << " ";
}