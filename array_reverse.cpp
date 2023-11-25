#include <iostream>
using namespace std;

int main()
{

    int size = 4;
    int arr[size] = {1, 2, 3, 4};

    string name = "hello";

    for (int i = size - 1; i >= 0; i--)
    {
        cout << " " << arr[i];
    }

    cout << " \t";
    int j = name.length();
    while (j)
    {
        cout << name[j];
        j--;
    }
}