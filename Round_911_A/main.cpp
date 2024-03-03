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
    int n;
    cin >> n;
    char row_of_cells[n];

    int lsg = 0;

    for(int i = 0; i < n; i++){
        cin >> row_of_cells[i];
    }

    int counter = 0;
    for(int i = 0; i < n; i++){
        if(row_of_cells[i] == '.') counter++;

        if(row_of_cells[i] == '#'){
            if(counter == 1) lsg++;
            else if(counter == 2) lsg += 2;
            else if(counter > 2) {
                lsg = 2;
                break;
            }

            counter = 0;
        }

    }
    if(counter == 1) lsg++;
    else if(counter == 2) lsg += 2;
    else if(counter > 2) lsg = 2;


    print(lsg);

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