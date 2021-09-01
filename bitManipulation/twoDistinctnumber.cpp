/*
    given a array [1 1 21 21 3 5];
    find the distinct number
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int Xor = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        Xor ^= arr[i];
    }
    
    int i = 0;
    for ( i; i < 32; i++)
    {
        if(Xor & 1<<i){
            break;
        }
    }
    int x = 0, y = 0;
    for (int j = 0; j < n; j++)
    {
        if(arr[j] & 1<<i)
            x ^= arr[j];
        else
            y ^= arr[j];
    }
    cout << x << ", " << y << "\n";
    return 0;
}