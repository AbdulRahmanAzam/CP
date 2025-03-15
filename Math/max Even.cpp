// https://atcoder.jp/contests/abc272/tasks/abc272_c
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
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

int main(){
    speedup();

    ll n;
    cin >> n;

    // --------------------- CORRECT WAY OF DOING
    // ODD + ODD = EVEN
    // EVEN + EVEN = EVEN

    ll o1 = -1, o2 = -1, e1 = -1, e2 = -1;
    rep(i, 0, n){
        ll x;
        cin >> x;

        if(x % 2 == 1){//odd
            if(x > o2){
                o1 = o2;
                o2 = x;
            }else if(x > o1)
                o1 = x;
        }else{
            if(x > e2){
                e1 = e2;
                e2 = x;
            }else if(x > e1)
                e1 = x;
        }
    }
    ll ans = -1;
    if(o1 != -1 && o2 != -1){
        ans = max(ans, o1 + o2);
    }
    if(e1 != -1 && e2 != -1){
        ans = max(ans, e1 + e2);
    }
    cout << ans << "\n";
    




// ------------------- JUGAAR NOT GOOD
    // ll ans = -1;
    // ll o1 = -1, o2 = -1;
    // ll e1 = -1, e2 =-1;
    // rep(i, 0, n){
    //     ll x;
    //     cin >> x;
    //     if(x % 2 == 1)//odd
    //         if(x > o2){
    //             o1 = o2;
    //             o2 = x;
    //         }else if(x > o1)
    //             o1 = x;
    //     else
    //         if(x > e2){
    //             e1 = e2;
    //             e2 = x;
    //         }else if(x > e1)
    //             e1 = x;
    // }

    // ll maxOdd = (o1 != -1 && o2 != -1) ? o1 + o2 : -1;
    // ll maxEven = (e1 != -1 && e2 != -1) ? e1 + e2 : -1;

    // ll maxOddEven = (e2 != -1 && o2 != -1) ? e2 + o2 : -1;

    // maxOdd = (maxOdd % 2 == 0) ? maxOdd : -1;
    // maxEven = (maxEven % 2 == 0) ? maxEven : -1;
    // maxOddEven = (maxOddEven % 2 == 0) ? maxOddEven : -1;

    // if(maxOdd != -1 && maxEven != -1){
    //     ans = max(maxOdd, maxEven);
    // }else if(maxOdd != -1 && maxOddEven != 1){
    //     ans = max(maxOdd, maxOddEven);
    // }else if(maxOddEven != -1 && maxEven != 1){
    //     ans = max(maxOddEven, maxEven);
    // }else if(maxEven != -1){
    //     ans = maxEven;
    // }else if(maxOddEven != -1){
    //     ans = maxOddEven;

    // }else if(maxOdd != -1){
    //     ans = maxOdd;

    // }
    // cout << ans << endl;
}
