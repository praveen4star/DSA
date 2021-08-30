/*
    Given N distinct element sorted array = [1,4,5,7,8]
    and int k 
    find the number of rectangle using array element
    where area of rectangle must be 
    a[i]*a[j]<k
*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for (ll i = 0; i<n; i++)
        cin >> arr[i];
    ll i = 0, j = 1, ans = 0;
    while (i<= j)
    {
        if(arr[i]*arr[j] >= k)
            j--;
        else {
            ans += 2*(j - i + 1) - 1;
            i++;
        }
    }
    cout << ans << endl;
    return 0;
}