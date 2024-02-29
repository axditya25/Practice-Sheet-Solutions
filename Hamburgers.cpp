#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{

    string s;
    cin >> s;

    int nb, ns, nc;
    cin >> nb >> ns >> nc;
    int pb, ps, pc;
    cin >> pb >> ps >> pc;
    int r;
    cin >> r;

    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == 'B')
        {
            if (nb >= 1)
            {
                nb--;
            }
            else if (r >= pb)
            {
                r = r - pb;
            }
            else
            {
                break;
            }
        }

        if (s[i] == 'S')
        {
            if (ns >= 1)
            {
                ns--;
            }
            else if (r >= ps)
            {
                r = r - ps;
            }
            else
            {
                break;
            }
        }

        if (s[i] == 'C')
        {
            if (nc >= 1)
            {
                nc--;
            }
            else if (r >= pc)
            {
                r = r - pc;
            }
            else
            {
                break;
            }
        }

        if (i == s.size() - 1)
        {
            count++;
            i = -1;
        }
    }

    cout << count;

    return 0;
}
