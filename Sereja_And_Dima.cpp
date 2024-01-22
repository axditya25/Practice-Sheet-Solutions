#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n, s, e;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    s = 0;
    e = a.size() - 1;

    int sereja = 0;
    int dima = 0;
    while (s <= e)
    {

        if (a[s] <= a[e])
        {
            sereja += a[e];
            e--;
        }
        else
        {
            sereja += a[s];
            s++;
        }

        if (s > e)
        {
            break;
        }

        if (a[s] <= a[e])
        {
            dima += a[e];
            e--;
        }
        else
        {
            dima += a[s];
            s++;
        }
    }

    cout << sereja << " " << dima;
    return 0;
}
