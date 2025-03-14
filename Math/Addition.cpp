// https://atcoder.jp/contests/agc010/tasks/agc010_a
int main(){
    speedup();

    int t = 0;
    cin >> t;

    int sum = 0;
    rep(i, 0, t){
        int n;
        cin >> n;

        sum += n;
    }
    sum % 2 == 0  ? cout << "YES" : cout << "NO";
}
