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
    int w,d,h;
    cin >> w >> d >> h;

    pi laptop;
    cin >> laptop.first >> laptop.second;
    pi beamer;
    cin >> beamer.first >> beamer.second;


    int lsg_front_wall = h; // speichern direkt höhe ein

    int breite = laptop.first - beamer.first;

    if(breite < 0) breite *= -1;

    lsg_front_wall = lsg_front_wall + breite + laptop.second + beamer.second;


    ///_______________________
    int lsg_back_wall = h; // speichern direkt höhe ein

    lsg_back_wall = lsg_back_wall + breite + (d - laptop.second) + (d-beamer.second);

///_______________________
    int lsg_left_wall = h; // speichern direkt höhe ein

    int laenge = laptop.second - beamer.second;

    if(laenge < 0) laenge *= -1;

    lsg_left_wall = lsg_left_wall + laenge + laptop.first + beamer.first;

///_______________________
    int lsg_right_wall = h; // speichern direkt höhe ein

    lsg_right_wall = lsg_right_wall + laenge + (w-laptop.first) + (w-beamer.first);


    int lsg = min(lsg_back_wall, lsg_front_wall);
    lsg = min(lsg, lsg_left_wall);
    lsg = min(lsg, lsg_right_wall);

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