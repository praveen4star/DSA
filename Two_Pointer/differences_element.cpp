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
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for (ll i = 0; i<n; i++)
        cin >> arr[i];
    ll i = 0, j = 1;
    bool flag = false;
    while (j > i and j <n)
    {
        if(arr[j]-arr[i] == k){
            flag = true;
            break;
        }
        else if(arr[j]-arr[i] > k){
            if(j == i+1){
                i++;
                j++;
            }
            else
                i++;
        }
        else{
            j++;
        }

    }
    flag ? cout << "Yes" : cout << "No";
    return 0;
}