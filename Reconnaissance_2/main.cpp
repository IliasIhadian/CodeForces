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
    int arr[n];

    int max_distance = INT_MAX;
    int tmp = INT_MAX;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }


    for(int i = 0; i < n; i++){
        if( i+1 != n){
            tmp = arr[i] - arr[i + 1];
        }else{
            tmp = arr[i] - arr[0];
        }
        if(tmp < 0) tmp = tmp * -1;
        if(tmp < max_distance) max_distance = tmp;
    }

    for(int i = 0; i < n; i++){
        if( i+1 != n){
            tmp = arr[i] - arr[i + 1];
        }else{
            tmp = arr[i] - arr[0];
        }
        if(tmp < 0) tmp = tmp * -1;
        if(tmp == max_distance){
            if( i+1 != n){
                cout << i +1 << " " << i+2;
            }else{
                cout << i +1 << " " << 1;
            }
            return;
        }
    }

    return;


}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
#endif

   solve();

    return 0;
}
