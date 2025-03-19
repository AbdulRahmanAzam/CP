https://codeforces.com/problemset/problem/17/A



void sieve(ll n, ll k){
    vector<bool> isPrime(n+1, 1);
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i * i <= n; i++){
        if(isPrime[i]){
            for (int j = i * i; j <= n; j += i){
                isPrime[j] = 0;
            }
        }
    }

    vector<ll> prime;
    for(int i =2; i <= n; i++){
        if(isPrime[i]) prime.push_back(i);
    }

    // ---------------------------- SOLUTION
    // calculate sum of the primes from starting and count if their sum is present in the prime
    ll count = 0;
    for(int i=0; i < prime.size()-1; i++){
        ll sum = prime[i] + prime[i+1] + 1;
        if(k > 0 && sum <= n && isPrime[sum] ){
            k--;
        }
    }
    if(k == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main(){
    speedup();

   ll n, k;
   cin >> n >> k;

   sieve(n, k);

}
