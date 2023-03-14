#include <bits/stdc++.h>
using namespace std;
// recursion code
int mcm(int a[], int i, int j)
{

    if (i >= j)
        return 0;
    int mc = INT_MAX;
    for (int k = i; k <= j - 1; k++)
    {
        int temp = mcm(a, i, k) + mcm(a, k + 1, j) + (a[i - 1] * a[k] * a[j]);
        mc = min(temp, mc);
    }
    return mc;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << mcm(a, 1, n - 1);
    return 0;
}