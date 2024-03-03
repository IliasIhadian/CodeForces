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
typedef vector<size_t> vi;
typedef vector<pi> vii;
typedef set<int> si;
typedef set<pi> sii;
typedef multiset<int> msi;
typedef multiset<pi> msii;

void solve() {
    int len_s,len_t;
    cin >> len_s;
    cin >> len_t;

    string s;
    string t;

    cin >> s;
    cin >> t;


    vector<size_t> positions;
    size_t pos;
    pos = s.find("00", 0);
    while(pos != string::npos)
    {
        positions.push_back(pos);
        pos = s.find("00",pos+1);
    }
    pos = s.find("11", 0);
    while(pos != string::npos)
    {
        positions.push_back(pos);
        pos = s.find("11",pos+1);
    }
    if(positions.empty()){
        print("Yes");
        return;
    }


    positions.clear();
    pos = t.find("00", 0);
    while(pos != string::npos)
    {
        positions.push_back(pos);
        pos = t.find("00",pos+1);
    }

    pos = t.find("11", 0);
    while(pos != string::npos)
    {
        positions.push_back(pos);
        pos = t.find("11",pos+1);
    }

    if(!positions.empty()){
        print("No");
        return;
    }


    pos = s.find("00", 0);
    while(pos != string::npos)
    {
        positions.push_back(pos);
        pos = s.find("00",pos+1);
    }

    if(!positions.empty()){
        if((t[0] == '0') || t[len_t-1] == '0'){
            print("No");
            return;
        }

    }


    positions.clear();
    pos = s.find("11", 0);
    while(pos != string::npos)
    {
        positions.push_back(pos);
        pos = s.find("11",pos+1);
    }

    if(!positions.empty()){
        if((t[0] == '1') || t[len_t-1] == '1'){
            print("No");
            return;
        }

    }

    print("YES");
    //print(s);
    //print(t);
    //print_col(positions);
    //print('\n');
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