#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    string P = str;
    reverse(P.begin(), P.end());
    if (str == P)
      return true;

    return false;
    
}
int main()
{   string S = "AACCDCCAA";
    cout << isPalindrome(S);
    return 0;
}
