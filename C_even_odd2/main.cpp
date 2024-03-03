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

void solve(int t) {
    char arr[t][t];

    int neighbour = 0;
    int flag = 1;

    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){

                if(i != 0 ) ///unten
                    if (arr[i-1][j] == 'o') neighbour++;
                if(j != 0 ) ///links
                    if (arr[i][j-1] == 'o') neighbour++;
                if(j != t-1 ) ///rechts
                    if (arr[i][j+1] == 'o') neighbour++;
                if(i != t-1 ) ///oben
                    if (arr[i+1][j] == 'o') neighbour++;

                //print(i);
                //print(j);
                //print(neighbour);
                //print('\n');


                if (neighbour % 2 == 1) flag = 0;
                neighbour = 0;
        }
    }




    if(flag == 1) print("YES");
    else print("NO");

}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
#endif

    ll t;
    cin >> t;

    solve(t);

    return 0;
}