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
    int array[n];

    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    int difference = INT_MAX;
    for(int i = 0; i < n-1; i++){
        if(array[i+1] - array[i] < difference) difference = array[i+1] - array[i];

    }

    if(difference < 0) {
        print(0);
        return;
    }

    //print(difference);
    int lsg = (difference/2) + 1;

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