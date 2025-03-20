https://atcoder.jp/contests/abc162/tasks/abc162_c


ll gcd(ll a, ll b){
    if (b == 0) return a;
    return gcd(b, a%b);
}
int main(){
    speedup();

    ll n;
    cin >> n;

    ll ans = 0;
    for (ll i = 1; i <= n; i++){
        for(ll j= 1; j <= n; j++){
            ll temp = gcd(i, j);

            for(ll k = 1; k <= n; k++){
                ans += gcd(temp, k);
            }
        }
    }
    cout << ans << endl;

}
