https://atcoder.jp/contests/abc208/tasks/abc208_c


int main(){
    speedup();

    ll n, k;
    cin >> n >> k;

    map<ll, ll> mp;
    vll num(n);
    rep(i, 0, n) 
        cin >> num[i] ;
    
    // making another temp vector same as num so that original index not changed
    vll temp = num;
    sort(all(temp));

    // every person must have this amount of candy
    ll ans = k / n;
    k = k % n;

    rep(i, 0, n){ // giving them that candy
        mp[temp[i]] = ans;
    }

    // the candies left for the less id ones
    for(ll i = 0; i < n && k > 0; i++){
        mp[temp[i]]++;
        k--;
    }

    // printing
    rep(i, 0, n){
        cout << mp[num[i]] << endl;
    }

}
