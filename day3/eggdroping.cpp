#include <bits/stdc++.h>
using namespace std;
int count(int e, int f)
{
    if (f == 0 || f == 1 || e == 1)
    {
        return f;
    }
    int attempt = INT_MAX;
    for (int i = 1; i <= f; i++)
    {
        int temp = max(count(e - 1, i - 1), count(e, f - i)) + 1;
        attempt = min(attempt, temp);
    }
    return attempt;
}
int main()
{
    int e, f;
    cin >> e >> f;
    cout << count(e, f) << endl;
    return 0;
}