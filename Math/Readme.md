Missing Number: https://cses.fi/problemset/task/1083

Addition: https://atcoder.jp/contests/agc010/tasks/agc010_a

Swappable: https://atcoder.jp/contests/abc206/tasks/abc206_c

Number Spiral: https://cses.fi/problemset/task/1071/

Trailing Zeros: https://cses.fi/problemset/task/1618/

Odd vs Even: https://atcoder.jp/contests/arc116/tasks/arc116_a

max Even: https://atcoder.jp/contests/abc272/tasks/abc272_c 

Kth common divisor: https://atcoder.jp/contests/abc120/tasks/abc120_b

Next Prime: https://atcoder.jp/contests/abc149/tasks/abc149_c

One and Two: https://codeforces.com/problemset/problem/1788/A

BachGold: https://codeforces.com/problemset/problem/749/A

NoldBach: https://codeforces.com/problemset/problem/17/A

Count Balls: https://atcoder.jp/contests/abc158/tasks/abc158_b

Large Digits: https://atcoder.jp/contests/abc187/tasks/abc187_a


# Module:
```
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define reverse(x) x.rbegin(), x.rend()
#define printv(v) for (auto& val : v) cout << val << " ";
#define rep(i, a, b) for (long long i = a; i < b; i++)

typedef vector<int> vi;
typedef vector<long long> vll;
typedef unsigned long long ull;
typedef long long ll;

void speedup(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void sieve(int n){
    vector<bool> isPrime(n+1, 1);
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i * i <= n; i++){
        if(isPrime[i]){
            for (int j = i * i; j <= n; j += i){
                isPrime[j] = 0;
            }
        }
    }

    vector<ll> prime;
    for(int i =2; i <= n; i++){
        if(isPrime[i]) prime.push_back(i);
    }
}

```

# Concepts
```
all possible answers (valid + invalid) = Combinations
valid = combination - invalid 
```
