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
    ld insgesamt = 0;
    int tmp;

    for(int i = 0; i< n; i++){
        cin >> tmp;
        insgesamt += tmp;
    }

    if(ceil(sqrt(insgesamt)) !=  sqrt(insgesamt)) print("NO");
    else print("YES");

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