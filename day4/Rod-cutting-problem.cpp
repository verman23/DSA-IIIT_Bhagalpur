#include <bits/stdc++.h>
using namespace std;
// basic recursion code
int maximumProfit2(vector<int> &prices, int n)
{
    if (n == 0)
    {
        return 0;
    }
    int maxProfit = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        maxProfit = max(maxProfit, prices[i - 1] + maximumProfit2(prices, n - i));
    }
    return maxProfit;
}

// Dp Code
int maximumProfit(vector<int> &prices, int n, vector<int> &dp)
{
    if (n == 0)
    {
        return 0;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int maxProfit = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        maxProfit = max(maxProfit, prices[i - 1] + maximumProfit(prices, n - i, dp));
    }
    return dp[n] = maxProfit;
}
int getMaxProfit(vector<int> &a, int n)
{
    vector<int> dp(n + 1, -1);
    return maximumProfit(a, n, dp);
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {   int x;
         cin>>x;
       v.push_back(x);
    }
    cout << getMaxProfit(v, n) << endl;
    cout << maximumProfit2(v, n)<< endl;
    return 0;
}
