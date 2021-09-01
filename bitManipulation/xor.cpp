/*
    given a array [2, 3, 4 2232,  22,];
    You have to find a[i] and a[j] where a[i]^a[j] == k
    else -1;
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n>>k;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    bool flag = true;
    map<int, int> g;
    for (int i = 0; i < n; i++){
        int x = k ^ arr[i];
        if(g.find(x) != g.end()){
            auto itr = g.find(x);
            flag = false;
            cout << itr->second << ", " << arr[i] << "\n";
        }
        else{
            g.insert(make_pair(arr[i], arr[i]));
        }
    }
    if(flag){
        cout << -1 << "\n";
    }
    return 0;
}