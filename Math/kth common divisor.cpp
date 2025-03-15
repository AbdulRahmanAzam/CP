// https://atcoder.jp/contests/abc120/tasks/abc120_b

#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define reverse(x) x.rbegin(), x.rend()
#define printv(v) for (auto& val : v) cout << val << " "; cout << "\n";
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

ll gcd(ll a, ll b){
    if(b == 0)
        return a;
    
    return gcd(b, a % b);
}

int main(){
    speedup();

    ll a, b, x;
    cin >> a >> b >> x;

    // --------------------------- OPTIMAL
    // finding gcd of a and b
    // then finding the divisors of the gcd
    // and give the kth largest divisor
    ll ans = 0;
    ll gcda = gcd(max(a,b), min(a,b));

    x--; // minus due to 1 indexing (gcd already calculated)
    vll div;
    for(ll i =1; i <= gcda; i++){
        if(gcda % i == 0){
            div.push_back(i);
            // if(i != gcda / i){ // if want to use this then put i * i on the limit
            //     div.push_back(gcda/i);
            // }
        }
    }
    sort(reverse(div));
    ans = (x < div.size()) ? div[x] : ans;
    cout << ans << endl;



  
    // ----------------------- BRUTE FORCE
    // ll ans = 0;
    // for(ll i = min(a, b); i >= 1 && x > 0; i--){
    //     if(a % i == 0 && b % i == 0){
    //         x--;
    //         ans = i;
    //     }
    // }
    // cout << ans << endl;

}
