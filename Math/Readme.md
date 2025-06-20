
[Missing Number](https://github.com/AbdulRahmanAzam/competitive-Programming/blob/main/Math/Missing%20Number.cpp) : &nbsp; https://cses.fi/problemset/task/1083

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

Sum of GCD of Tuples: https://atcoder.jp/contests/abc162/tasks/abc162_c

Fair Candy Distribution: https://atcoder.jp/contests/abc208/tasks/abc208_c

k-factorization: https://codeforces.com/problemset/problem/797/A

Prime subtraction: https://codeforces.com/problemset/problem/1238/A

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

bool isPrime(int n){ // sqrt(n) trivial division method
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n%2 == 0 || n%3 == 0) return false;
    for(int i = 5; i*i < n; i+= 6)
        if(n%i == 0 || n%(i+2) == 0) return false;
    return true;
}
```

# Concepts
```
all possible answers (valid + invalid) = Combinations
valid = combination - invalid
many prime numbers (sieve of eratosthenes)
isPrime (sqrt(n) trivial division method)
```
