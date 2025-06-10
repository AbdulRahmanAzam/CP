
int main(){
    speedup();
    int n;
    int k;
    cin >> n >> k;
    int cnt = 0;

    vector<int> arr;
    for(int i = 2; i*i <= n; i++){
        while(arr.size() < k-1 && n % i == 0){
            arr.push_back(i);
            n /= i;
        }
    }
    if(arr.size() != k-1 || n == 1){
        cout << -1 << endl;
        return 0;
    }
    for(auto& x: arr){
        cout << x << " ";
    }
    cout << n << endl;

}
