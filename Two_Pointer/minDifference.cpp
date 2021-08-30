/*
    Given sorted three array a[n], b[m], c[k]
    find the min. diference of : | max(Ai, Bj, Ci) - min(Ai, Bj, Ci)|
*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n, m, k;
    cin >> n >> m>>k;
    ll A[n],B[m], C[k];
    for (ll i = 0; i<n; i++)
        cin >> A[i];
    for (ll i = 0; i<m; i++)
        cin >> B[i];
    for (ll i = 0; i<k; i++)
        cin >> C[i];
    ll i = 0, j = 0, l = 0;
    ll ans = INT_MAX;
    while (i<n and j<m and l<k )
    {
        ll x = max(max(A[i], B[j]), C[l]) - min(min(A[i], B[j]), C[l]);
        if(x<0)
            x = -(x);
        ans = min(x, ans);
        if( min(min(A[i], B[j]), C[l]) == A[i]){
            i++;
        }
        else if( min(min(A[i], B[j]), C[l]) == B[j]){
            j++;
        }
        else{
            l++;
        }
    }

    cout << ans << endl;
    return 0;
}