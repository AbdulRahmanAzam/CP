// https://cses.fi/problemset/task/1071/

#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define printv(v) for (auto& val : v) cout << val << " "; cout << "\n";
#define rep(i, a, b) for (long long i = a; i < b; i++)

typedef vector<int> vi;
typedef vector<long> vl;
typedef unsigned long long ull;
typedef long long ll;

void speedup(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    ll t;
    cin >> t;
    ll x = 0, y = 0, temp = 0, formula = 0; 

    for(ll i = 0; i < t; i++){
        cin >> x >> y;

        // whichever is the maximum, find it
        temp = max(x, y);

        // finding the center of the spiral
        formula = (temp * temp) - temp + 1;

        // if both the cordinates are same then return the center of the spiral
        if(temp == x && temp == y){
            cout << formula << endl;
            
        }else if(temp %2 == 0){ // if even
            if(x < y){ // if x is less then  increase number
                cout << formula + (x-temp) << endl;
            }else{ //if y is less then decrease number
                cout << formula - (y-temp) << endl;
            }
        }else if(temp % 2 == 1){ // if odd
            if(y < x){ // if y is less then decrease number
                cout << formula - (temp - y) << endl;
            }else{
                cout << formula + (temp - x) << endl;
            }
        }
    }
}
