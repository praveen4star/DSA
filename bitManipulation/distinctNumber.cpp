/*
    given array [1, 2, 1, 3,3,4, 5, 4]
    find the distinct number
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans = 0;
    for (int i = 0; i <n; i++)
    {
        int x;
        cin >> x;
        ans = ans ^ x;
    }
    cout << ans << endl;
    return 0;
}