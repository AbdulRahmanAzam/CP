#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x; 

    vector<int> coins(n);
    for(int i = 0; i < n ; i++){
        cin >> coins[i];
    }

    vector<int> dp(x+1, 1e9);

    dp[0] = 0;
    for(int i = 1; i <= x; i++){ // x = desired sum
        for(int j = 0; j < n ; j++){ // n = no of coins
            if(coins[j] <= i){
                dp[i] = min(dp[i], dp[i- coins[j]] + 1);
            }
        }
    }
}
