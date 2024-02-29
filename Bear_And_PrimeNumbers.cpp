#include <bits/stdc++.h>
using namespace std;

bool Primecheck(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

const int N = 10000005;
vector<int> primes;
vector<bool> isPrime(N, 1);

void Sieve()
{
    isPrime[0] = isPrime[1] = 0;
    for (long long i = 2; i * i < N; i++)
        if (isPrime[i])
            for (int j = 2 * i; j < N; j += i)
                isPrime[j] = 0;

    for (int i = 0; i < N; i++)
    {
        if (isPrime[i])
            primes.push_back(i);
    }
}

int frq[N];
long long prfx[N];
int cnt[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        frq[arr[i]]++;
    }

    Sieve();

    for (int i = 0; i < primes.size(); i++)
    {
        for (int j = primes[i]; j < N; j += primes[i])
        {
            cnt[primes[i]] += frq[j];
        }
    }

    for (int i = 1; i < N; i++)
    {
        prfx[i] = prfx[i - 1] + cnt[i];
    }

    int m;
    cin >> m;
    int l, r;
    while (m--)
    {
        cin >> l >> r;
        r = min(r, N - 1);
        l = min(l, N - 1);
        cout << prfx[r] - prfx[l - 1] << endl;
    }

    return 0;
}
