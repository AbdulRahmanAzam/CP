
signed main(){
    speedup();
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;

        int sub = abs(x - y);
        if(sub == 1)
            cout << "NO"<< endl;
        else{
            cout << "YES" << endl;
        }
        // if(sub == 1 || sub == 0){
        //     cout << "NO" << endl;
        //     continue;
        // }
        // bool found = false;
        // for(int i = 5; i*i <= sub;i+=6){
        //     if(sub%i == 0 || sub%(i+2) == 0){
        //         cout << "YES" << endl;
        //         found = true;
        //         break;
        //     }
        // }
        // if(!found || !found && (sub % 2 == 0 || sub % 3  == 0)) cout << "YES" << endl; 
    }
}
