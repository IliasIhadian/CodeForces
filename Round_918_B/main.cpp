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
    char square[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> square[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(square[i][j] == '?'){
                if(i == 0){
                    if(square[i+1][j] != 'A' && square[i+2][j] != 'A') print('A');
                    else if((square[i+1][j] != 'B' && square[i+2][j] != 'B')) print('B');
                    else print('C');
                }

                if(i == 1){
                    if(square[i-1][j] != 'A' && square[i+1][j] != 'A') print('A');
                    else if((square[i-1][j] != 'B' && square[i+1][j] != 'B')) print('B');
                    else print('C');
                }

                if(i == 2){
                    if(square[i-1][j] != 'A' && square[i-2][j] != 'A') print('A');
                    else if((square[i-1][j] != 'B' && square[i-2][j] != 'B')) print('B');
                    else print('C');
                }
            }
        }
    }


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