#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> charcount(26, 0); // it crrate 26 box all have 0 value
    bool check;
    string s1 = "listen";
    string s2 = "siletn";

    int len1 = s1.length();
    int len2 = s2.length();

    if (len1 != len2)
        check = false;

    /*   for (int i = 0; i < len1; i++)
       {
           check = false;
           for (int j = 0; j < len2; j++)
           {
               if (s1[i] == s2[j])
               {
                   // cout << s1[i] << "==" << s2[j] << "\n";
                   check = true;
                   break;
               }
           }
           if (!check)
           {
               break;
           }
       }
       */

    // optmised version

    else
    {
        for (int i = 0; i < len1; i++)
        {
            cout << "i->" << s1[i] - 'a' << endl; // s1[i]-'a' used to change letter(char) to index(int)
            charcount[s1[i] - 'a']++;
            charcount[s2[i] - 'a']--;
        }

        check = true;
        for (auto count : charcount)
        {
            if (count != 0)
            {
                check = false;
                break;
            }
        }
    }

    if (check)
        cout << "angram";
    else
        cout << "not angram";
}