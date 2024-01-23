#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, temp;
        cin >> n >> temp;
        bool ans = true;

        int cl, ch, pl = temp, ph = temp, ti = 0, tf;
        int time, opt1, opt2, opt3, opt4;

        while (n--)
        {
            cin >> tf >> cl >> ch;
            time = tf - ti;
            opt1 = abs(pl - cl);
            opt2 = abs(pl - ch);
            opt3 = abs(ph - cl);
            opt4 = abs(ph - ch);

            if (time == 0)
            {
                if (((pl >= cl) && (pl <= ch)) || ((ph >= cl) && (ph <= ch)))
                {
                    ans = true;
                }
            }
            else if ((opt1 <= time) || (opt2 <= time) || (opt3 <= time) || (opt4 <= time))
            {
                ans = true;
            }
            else
            {
                ans = false;
                break;
            }

            pl = cl;
            ph = ch;
            ti = tf;
        }

        if (ans == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
