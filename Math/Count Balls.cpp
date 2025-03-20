https://atcoder.jp/contests/abc158/tasks/abc158_b

int main(){
    speedup();

    ll x, b, r;
    cin >> x >> b >> r;

    // counting how much multiples of b will be needed
    ll mul = x / (b + r);

    // multiplying count by b
    ll ans = b * mul;

    // if some are left then finding how much left in the total 
    x = x % (b+r);

    // if total is big then all b else the value of x
    ans += x >= b ? b : x;
    cout << ans << endl;
}
