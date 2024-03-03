#include <iostream>
#include <fstream>
#include <algorithm>
//#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);  //wichtig macht program schneller

    //ifstream in;
    //long double tmp;

    //in.open("in");


    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr + n);
    int alles_eins = 1;
    for(int i: arr){
        if(i != 1) {
            alles_eins = 0;
        }

    }

    if(alles_eins == 0) arr[n -1] = 1;
    else arr[n-1] = 2;

    sort(arr, arr + n);


    //for(int i = 0; i < n; i++) {
    //    if(arr[i] == 1) continue;
    //    arr[i] = arr[i] - 1;
    //    break;
    //}
    //for(int i = 0; i < n-1; i++) {
    //    if((arr[i] == arr[i+1]) || (arr[i] + 1 == arr[i+1]) ) continue;
    //    arr[i+1] = arr[i] + 1;
    //}

    //sort(arr, arr + n);
    //if(arr[n-1] == 1 ) arr[n-1] = 2;


    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }




    return 0;
}
