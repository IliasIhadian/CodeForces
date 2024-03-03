//
// Created by keko
//

#include <bits/stdc++.h>

using namespace std;

#define print(i) cout << i << " "
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
    pi start,final;
    cin >> start.first >> start.second;
    cin >> final.first >> final.second;

    //rock
    int x_abstand = abs(start.first - final.first);
    int y_abstand = abs(start.second - final.second);

    if(x_abstand == 0 || y_abstand == 0)
        print(1);
    else print(2);

    //bishop

    if(((start.first + start.second) % 2) != ((final.first + final.second) % 2 )){
        print(0);
    }else{
        if(y_abstand == x_abstand) print(1);
        else print(2);
    }


    //king
    if(y_abstand == 0)
        print(x_abstand);
    else if(x_abstand == 0)
        print(y_abstand);
    else if(x_abstand >= y_abstand) print(x_abstand);
    else if(x_abstand <= y_abstand) print(y_abstand);

}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
#endif

    solve();

    return 0;
}
