https://cses.fi/problemset/task/1083

int main(){
    speedup();
    ull n;
    cin >> n;

    // o (1)
    ull sum  = 0;
    for(int i=1; i < n; i++){
        ull x = 0;
        cin >> x;
        sum += x;
    }

    ull ans = (n+1) * n / 2;
    cout << ans - sum;


    // JUGAAR
    // int sum = 0;
    // for(int i = 1; i < n; i++){
    //     int x;
    //     cin >> x;
    //     sum += x;
    // }
    
    // int ans = 0;
    // for(int i = 1; i <= n; i++){
    //     ans += i;
    // }

    // cout << ans - sum;

}
