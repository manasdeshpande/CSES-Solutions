#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    vector<int> coins(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> coins[i];
    }
    vector<long long int> dp(x+1, 0);
    dp[0] = 1;
    for(int i = 1; i <= x; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i-coins[j] >= 0)
            {
                dp[i] += dp[i-coins[j]];
                dp[i] %= 1000000007;
            }
        }
        
    }
    cout<<dp[x];
}

