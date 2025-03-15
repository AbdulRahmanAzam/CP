// https://atcoder.jp/contests/arc116/tasks/arc116_a

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

    // --------------------- OPTIMAL -----------------
    
    // if  number not divisible by 2 then more odd numbers
    // if number divisible by 4 then only more even numbers
    // if none of the above then same
    rep(i, 0, n){
        ll x;
        cin >> x;

        if(x % 2 == 1)
            cout << "Odd" << endl;
        else if(x % 4 == 0)
            cout << "Even" << endl;
        else
            cout << "Same" << endl;
    }

   // ---------------------- BRUTE FORCE ------------------ 
    // rep(i, 0, n){
    //     int x;
    //     cin >> x;
        
    //     ll odd = 0;
    //     ll even = 0;
    //     for(ll i = n; i >= 1; i--){
    //         if(n % i == 0)  {
    //             if(i % 2 == 0) even++;
    //             else odd++;
    //         }
    //     }

    //     if(odd == even)
    //         cout << "Same" << endl;
        
    //     cout << ((odd > even) ? "Odd" : "Even") << endl;
    // }
}
