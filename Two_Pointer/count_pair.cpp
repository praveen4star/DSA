#include<bits/stdc++.h>
#define ll long long int
using namespace std;
/*
    given N element sorted array = [1,4,4,5,5,5,6,6,11]
    and k 
    find the number of pairs (i, j) where a[i] +a[j] = k
*/
ll nCr(ll n, ll r){
    if(r>n){
        return 0;
    }
    if(r > (n-r)){
        r = n - r;
    }
    if(r == 0){
        return 1;
    }
    ll k = 1, p = 1;
    for (ll i = 0; i < r; i++){
        k *= (n - i);
        p *= (i + 1);
        ll x = __gcd(k, p);
        k /= x;
        p /= x;
    }
    return k/p;
}

int main(){

    ll n, k;
    cin >> n>>k;
    ll arr[n];
    for (ll i = 0; i < n;i++)
        cin >> arr[i];
    ll i = 0, j = n - 1;
    ll ans = 0;
    while (j> i)
    {
        
        if(arr[i]+arr[j] > k)
            j--;
        else if( arr[i] + arr[j] < k ){
            i++;
        }
        else{
            
            if(arr[i] == arr[j]){
                ans += ((j - i + 1) * (j - i)) / 2;
                break;
            }
            ll temp = arr[i];
            ll x = 0, y = 0;
            while (temp == arr[i] and i< j)
            {
                x++;
                i++;
            }
            temp = arr[j];
            while (temp == arr[j] and i< j)
            {
                y++;
                j--;
            }
            ans += x * y;
        }
    }
    cout << ans << endl;
    return 0;
}