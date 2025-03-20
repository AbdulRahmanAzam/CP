https://atcoder.jp/contests/abc187/tasks/abc187_a



int main(){
    speedup();

    string a, b;

    cin >> a >> b;

    ll ca = 0, cb = 0;

    ca = (a[0] - '0') + (a[1] - '0') + (a[2] - '0');

    cb = (b[0] - '0') + (b[1] - '0') + (b[2] - '0');

    cout << (ca > cb ? ca : cb) << endl; 
}

