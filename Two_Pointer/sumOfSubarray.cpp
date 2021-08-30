/*
    Given N element sorted array = [1,4,5,7,8]
    and int k 
    return 1 if sum of subarray == k
    else 0;
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
    ll i = 0, j = 0;
    bool flag = 0;
    ll sum = arr[0];
    while (j < n and j >= i)
    {
        if(sum == k){
            flag = 1;
            break;
        }
        else if(sum < k){
            j++;
            sum += arr[j];
        }
        else if(i == j){
            break;
        }
        else{
            sum -= arr[i];
            i++;
        }
    }
    flag ? cout << "Yes" : cout << "No";
    return 0;
}