https://codeforces.com/problemset/problem/1788/A


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

int main(){
    speedup();

    ll t;
    cin >> t;

    rep(i,0, t){
        ll n;
        cin >> n;

        vll v;
        ll c2 = 0;
        rep(i,0, n){
            int x;
            cin >> x;
            v.push_back(x);

            if(x % 2 == 0){
                c2++;
            }
        }
        // --------------------------------- COUNT NO OF 2's
        //          2fromleft == total2 - 2from left
        int c21 = 0;
        ll k = -1;
        for(ll i = 0; i < n; i++){
            
            if(v[i] % 2 == 0){
                c21++;
            }
            
            if(c21 == c2 - c21){
                k = i + 1;
                break;
            }
        }
        
            cout << k << endl;
        
        
    }

    // ------------------------------------ JUGAAR
    // rep(i, 0, t){
    //     ll n;
    //     cin >> n;
        
    //     vll v;
    //     rep(j, 0, n){
    //         ll x;
    //         cin >> x;
    //         v.push_back(x);
    //     }
    //         ll li = 0;
    //         ll ri = v.size() -1;

    //         ll left = v[li++];
    //         ll right = v[ri--];
    //         while(li <= ri){
    //             if(left < right){
    //                 left *= v[li];
    //                 li++;
    //             }else{
    //                 right *= v[ri];
    //                 ri--;
    //             }
    //         }

    //         if(left == right){
    //             cout << li << endl;
    //         }else{
    //             cout << -1 << endl;
    //         }
    // }
}
