/*
    Given N element sorted array = [1,4,5,7,8]
    and int k 
    if find a[i]-a[j] == k
        yes
    else 
        no
*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll p1, p2, p3, k;
    cin >> p1>>p2>>p3>>k;
    ll x1 = 0, x2 = 0, x3 = 0;
    ll arr[k + 1];
    arr[0] = 1;
    for (int i = 1; i <= k; i++)
    {
        arr[i] = min(min(p1 * arr[x1], p2 * arr[x2]), p3 * arr[x3]);
        if(arr[i] == p1*arr[x1])
            x1 += 1;
        else if(arr[i] == p2*arr[x2])
            x2 += 1;
        else
            x3 += 1;
        if(arr[i] == arr[i-1])
            i -= 1;
       
    }
    for (int i = 0; i <= k; i++)
        cout << arr[i] <<", ";
    return 0;
}