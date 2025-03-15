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

    // --------------------- OPTIMAL ----------------

    // determined by no of times 10 is a factor in the product. since 10 = 2 x 5
    // and there is always more factor of 2 than 5, so trailing zeros is determined by 
    // the no of times 5 is a factor in the product.

    ll sum = 0;
    while(n > 0){
        sum += n / 5;
        n /= 5;
    }

    cout << sum << endl;


    // -------------------------- BRUTE FORCE
    // string a = "1";
    // for(ll i = 1; i <= n; i++){ 
    //     mul(a, to_string(i));
    // }   

    // ll ans = 0;
    // for(ll i = a.size()-1; i >= 0; i--){
    //     if(a[i] != '0') break;
    //     ans++;
    // }

    // cout << ans;
}



void mul(string &a, string b){

    vll res(a.size() + b.size(), 0);

    for(ll i= a.size()-1; i>= 0; i--){
        for(ll j = b.size()-1; j>=0; j--){
            ll mul = (a[i] - '0') * (b[j] - '0');
            ll sum = mul + res[i+j+1];

            res[i + j + 1] = sum % 10;
            res[i + j] += sum / 10;
        }
    }

    a = "";
    for(auto x: res){
        if(!(a.empty() && x == 0))
            a += to_string(x);
    }
}
