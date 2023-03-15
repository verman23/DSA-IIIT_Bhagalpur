//coin change problem
#include<bits/stdc++.h>
using namespace std;
//basic recursion approach
int coinChange(vector<int> const &S, int sum)
{
    if (sum == 0) {
        return 0;
    }
    if (sum < 0) {
        return INT_MAX;
    }
    int coins = INT_MAX;
    for (int i: S)
    {
        int result = coinChange(S, sum - i);
        if (result != INT_MAX) {
            coins = min(coins, result + 1);
        }
    }
    return coins;
}
//dynamic programming approach
int coinChange2(vector<int> const &arr, int sum)
{
    int dp[sum + 1];
    for (int i = 1; i <= sum; i++)
    {
        dp[i] = INT_MAX;
        int result = INT_MAX;

        for (int c: arr)
        {
            if (i - c >= 0) {
                result = dp[i - c];
            }

            if (result != INT_MAX) {
                dp[i] = min(dp[i], result + 1);
            }
        }
    }

    return dp[sum];
}
int main(){
    
    return 0;
}