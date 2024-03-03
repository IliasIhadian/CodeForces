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

void solve(string t) {
    int n;
    n = t.size();
    int flag = 1;

    for (int i = 0; i < n; i++) {
        if(t[n-1-i] != t[i]) flag = 0;  ///BCDEFGJKLNPQRSZ dürfen nicht vorkommen {'B', 'C', 'D', 'E', 'F', 'G', 'J', 'K', 'L', 'N', 'P', 'Q', 'R', 'S', 'Z'}
    }

    vector<char> vec = {'B', 'C', 'D', 'E', 'F', 'G', 'J', 'K', 'L', 'N', 'P', 'Q', 'R', 'S', 'Z'};
    for(char c: vec) {
        if (t.find(c, 0) < n) flag = 0;
        //if (t.find(c, 0) <= n){
        //    print(c);
        //    print(t.find(c, 0));
        //}
    }

    for (int i = 0; i < n; i++) {
        if ((int)(t[i]) < 65 || (int)(t[i]) > 90) {
            flag = 0;
        }
    }

    //if(n <= 1) flag = 0;

    if(flag == 1) print("YES");
    else print("NO");
}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
#endif

    string t;
    cin >> t;


    solve(t);

    return 0;
}
