https://codeforces.com/problemset/problem/749/A
int main(){
    speedup();

    ll n;
    cin >> n;

    ll s2 =0;
    ll s3 = 0;
    if(n % 2 == 0){
        s2 = n / 2;
    }else{
        s2 = (n - 3) / 2;
        s3++;
    }

    cout << s2+s3 << endl;
    for(ll i = 0; i < s2; i++){
        cout << 2 << " ";
    }
    if(s3)
        cout << 3 << endl;

}
