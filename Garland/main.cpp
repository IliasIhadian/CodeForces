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
    int in;
    cin >> in;

    int in_digits[4];
    int counter = 3;
    while (counter >= 0)
    {
        in_digits[counter] = in % 10;
        in /= 10;
        counter--;
    }
    //print_col(in_digits);


    int same = 0;
    int max_same = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if((in_digits[i] == in_digits[j]) && (i != j)) same++;
        }
        if(max_same < same) max_same = same;
        same = 0;
    }

    if (max_same == 3)
        print(-1);
    else if (max_same == 2)
        print(6);
    else if (max_same == 1)
        print(4);
    else if (max_same == 0)
        print(4);


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