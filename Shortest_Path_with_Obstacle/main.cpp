//
// Created by keko
//

#include <bits/stdc++.h>

using namespace std;

#define print(i) cout << i << endl
#define print_col(a) for(auto item: a) cout << item << ' '

//#define int ll

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef set<int> si;
typedef set<pi> sii;
typedef multiset<int> msi;
typedef multiset<pi> msii;

void solve() {
    pi a,b,f;
    cin >> a.first >> a.second;
    cin >> b.first >> b.second;
    cin >> f.first >> f.second;

    int x_abstand = abs(a.first - b.first);
    int y_abstand = abs(a.second - b.second);

    if(x_abstand == 0){
        if(a.first == f.first) {
            if (a.second > b.second && (f.second < a.second && f.second > b.second)) {
                print(y_abstand + 2);
                return;
            }else if (a.second < b.second && (f.second > a.second && f.second < b.second)) {
                print(y_abstand + 2);
                return;
            }
        }

    }else if(y_abstand == 0){
        if (a.second == f.second) {
            if (a.first > b.first && (f.first < a.first && f.first > b.first)) {
                print(x_abstand + 2);
                return;
            } else if (a.first < b.first && (f.first > a.first && f.first < b.first)) {
                print(x_abstand + 2);
                return;
            }
        }
    }

    print(x_abstand + y_abstand);



}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
#endif

    ll t;
    cin >> t;
    while(t--) solve();

    return 0;
}