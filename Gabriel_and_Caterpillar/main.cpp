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

   ll caterpillar_height_at_10pm;
   cin >> caterpillar_height_at_10pm;

   ll apple_height;
   cin >> apple_height;

   ll goes_up_per_hour;
   cin >> goes_up_per_hour;

   ll goes_down_per_hour;
   cin >> goes_down_per_hour;

   ll differenz = apple_height - caterpillar_height_at_10pm;

   if(differenz == 0) {

       print(0);
       return;
   }

   ll counter = 0;
   ll height = 0;
   ll test = 0;
   while(1==1){


       if(counter == 0) height +=  8*goes_up_per_hour;
       else height += 12*goes_up_per_hour;

       if(differenz <= height){
           print(counter);
           return;
       }

       height -= 12*goes_down_per_hour;

       if(counter == 2) test = height;
       if(counter == 3 && height <= test){
           print(-1);
           return;

       }



       counter++;

   }






}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
#endif

    solve();

    return 0;
}