// https://atcoder.jp/contests/abc149/tasks/abc149_c

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

void sieve(ll n){
    vector<bool> is_prime(n+n+1, true);
    is_prime[0] = is_prime[1] = false;

    bool cont = true;
    for(ll i = 2; i*i <= n+n; i++){
        if(is_prime[i]){
            for(ll j = i * i; j <= n+n ; j+=i){
                is_prime[j] = false;
            }
        }

    }

    vll prime;
    ll ans = 0;
    for(ll i = n; i <= n+n; i++){
        if(is_prime[i]){
            ans = i;
            break;
        }
    }
    // printv(prime);
    cout << ans << endl;

}

bool isPrime(ll n){
    if(n == 2 || n == 3) return true;
    if(n < 2 || n % 2 == 0|| n % 3 == 0) return false;

    for(ll i = 5; i * i <= n; i += 6){ // a new formula to find the isPrime
        if(n % i == 0 || n % (i+2) == 0)
            return false;
    }
    return true;
}

int main(){
    speedup();

    ll n;
    cin >> n;
    

    // ---------------------- APPROACH 1
    // sieve(n);

    // --------------------- APPROACH 2
    ll x = n;
    while(!isPrime(x)){
        x++;
    }
    cout << x << endl;
}
