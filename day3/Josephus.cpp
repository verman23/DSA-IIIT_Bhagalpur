#include <bits/stdc++.h>
using namespace std;
int rem(int n, int k)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (rem(n - 1, k) + k - 1) % n + 1;
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    cout << rem(n, k);
    return 0;
}