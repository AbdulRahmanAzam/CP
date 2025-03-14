https://atcoder.jp/contests/abc206/tasks/abc206_c

#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define printv(v) for (auto& val : v) cout << val << " "; cout << "\n";
#define rep(i, a, b) for (int i = a; i < b; i++)

typedef vector<int> vi;
typedef vector<long> vl;
typedef unsigned long long ull;
typedef long long ll;

void speedup(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

ll nc2(ll n){
    return (n * (n-1))/2;
}

int main(){
    speedup();

    ll n;
    cin >> n;

    vl arr(n);
    rep(i, 0, n){
        cin >> arr[i];
    }

    // ------------------------- FORMULA EFFICIENT
    // all possible answers (valid + invalid) = Combinations
    // valid = combination - invalid 
    map<ll, ll> mp;
    rep(i, 0, n){
        mp[arr[i]]++;
    }

    ll total = nc2(n);
    ll invalid = 0;
    for(auto x: mp){
        invalid += nc2(x.second);
    }
    cout << total - invalid << "\n"; 


    //-------------------------  BRUTE FORCE
    // int res = 0;
    // rep(i, 0, n){
    //     rep(j, i+1, n){

    //         if(arr[i] != arr[j]){
    //             res++;
    //         }
    //     }
    // }
    // cout << res;
}
