#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int a[26] = {0};
        int c[26] = {0};
        string s;
        cin >> s;

        if (s.size() == 1)
        {
            cout << s << endl;
        }
        else
        {
            int i = 0;

            while (i < s.size() && i + 1 < s.size())
            {
                if (s[i] != s[i + 1])
                {
                    int indx = s[i] - 'a';
                    if (c[indx] % 2 == 0)
                    {
                        a[indx] = 1;
                        c[indx]++;
                        i++;
                    }
                    else
                    {
                        c[indx]++;
                        i++;
                    }
                }

                else
                {
                    int indx = s[i] - 'a';
                    if (a[indx] == 1)
                    {
                        i++;
                    }
                    else
                    {
                        a[indx] = -1;
                        c[indx]++;
                        i++;
                    }
                }

                if (i + 1 == s.size())
                {
                    int indx = s[i] - 'a';
                    if (c[indx] % 2 == 0)
                    {
                        a[indx] = 1;
                        c[indx]++;
                        i++;
                    }
                    else
                    {
                        c[indx]++;
                        i++;
                    }
                }
            }

            for (int i = 0; i < 26; i++)
            {
                if (a[i] == 1)
                {
                    cout << char(i + 'a');
                }
            }
            cout << endl;
        }
    }

    return 0;
}
