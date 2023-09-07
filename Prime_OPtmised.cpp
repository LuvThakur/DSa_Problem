#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, i, a = 0;
    cout << "ente the number\n";
    cin >> n;

    // more optmize code
    // all prime no. remainder is 1 or 5 except 2,3 on deviding by 6 upto 25
    // 2 ,3 ,5 ,7,11,13 ,17,,23
    if (n > 0 && n < 25)
    {
        if (n == 2 || n == 3)
            cout << "prime\n"
                 << endl;

        else if (n % 6 == 1 || n % 6 == 5)
        {
            cout << "prime\n"
                 << endl;
        }
        else
        {
            cout << "not-prime\n"
                 << endl;
        }
    }
    else
    {
        /*
        if (n % 2 != 0 && n % 3 != 0 && n % 4 != 0 && n % 5 != 0 && n % 6 != 0 && n % 7 != 0 && n % 8 != 0 && n % 9 != 0)
        {
            cout << "prime" << endl;
        }
        else
            cout << "not -prime" << endl;*/
        for (int i = 2; i <= 9; i++)
        {
            if (n % i == 0)
            {
                a = 1;
                break;
            }
        }
        if (a == 0)
            cout << "prime\n"
                 << endl;
        else
            cout << "not-prime\n";
    }
    // optmize code
    /*
        for (i = 2; i <= sqrt(n); i++) // i <= n / 2
    {

        if (n % i == 0)
        {
            a++;
        }
    }

    if (a == 0)
    {
        cout << "prime";
    }
    else if (a >= 1)
    {
        cout << "not prime";
    }
*/
    main();
    return 0;
}