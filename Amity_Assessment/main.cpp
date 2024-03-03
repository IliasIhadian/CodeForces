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

    int tmp;
    char arr[4];
    char tmp_arr[4];
    char arr_solution[4];
    char tmp_arr_solution[4];

    for(int i = 0; i < 4; i++){
        cin >> tmp_arr[i];
    }
    tmp = tmp_arr[2];
    tmp_arr[2] = tmp_arr[3];
    tmp_arr[3] = tmp;

    for(int i = 0; i < 4; i++){
        cin >> tmp_arr_solution[i];
    }
    tmp = tmp_arr_solution[2];
    tmp_arr_solution[2] = tmp_arr_solution[3];
    tmp_arr_solution[3] = tmp;

    for(int i = 0; i < 4; i++){
        if(tmp_arr[i] == 'A'){
            for(int j = 0; j < 4; j++){
                if(i+j >= 4){
                    arr[j] = tmp_arr[i + j - 4];
                } else arr[j] = tmp_arr[i + j];
            }
        }
    }
     for(int i = 0; i < 4; i++){
        if(tmp_arr_solution[i] == 'A'){
            for(int j = 0; j < 4; j++){
                if(i+j >= 4){
                    arr_solution[j] = tmp_arr_solution[i + j - 4];
                } else arr_solution[j] = tmp_arr_solution[i + j];
            }
        }
    }

     char letter_seq_arr[3];
     char letter_seq_arr_solution[3];
     int counter = 0;
     int counter1 = 0;
    for(int i = 0; i < 4; i++){
        if(arr[i] != 'X'){
            letter_seq_arr[counter] = arr[i];
            counter++;
        }
        if(arr_solution[i] != 'X'){
            letter_seq_arr_solution[counter1] = arr_solution[i];
            counter1++;
        }
    }


    for(int i = 0; i < 3; i++){
        if(letter_seq_arr_solution[i] != letter_seq_arr[i]){
            print("NO");
            return;
        }

    }


    print("YES");
     return;

}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
#endif

    solve();

    return 0;
}