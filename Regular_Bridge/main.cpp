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

    int k_regular;
    cin >> k_regular;

    if(k_regular%2 == 0){
        print("NO");
        return;
    }

    print("YES");

    if(k_regular == 1){
        print("2 1");
        print("1 2");

        return;
    }

    cout<<2*(k_regular+2)<<" "<<k_regular*(k_regular+2)<<endl;

    // für A
    for(int i = 1; i <= k_regular+2; i++){
        for(int j = i+1; j <= k_regular+2; j++){

            if((j%2==1 || j==2) && (j==i+1)) continue;

            cout<<i<<" "<<j<<endl;
            cout<<i+k_regular+2<<" "<<j+k_regular+2<<endl;

        }
    }
    cout<<2<<" "<<k_regular+4<<endl;

}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
#endif

   solve();

    return 0;
}