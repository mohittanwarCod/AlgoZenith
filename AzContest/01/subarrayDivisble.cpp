#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
    ll N;
    cin >> N;

    vector<ll> prefix(N + 1);
    vector<ll> a(N);
    map<ll, ll> myMap;

    ll count = 0;
    myMap[0]++;

    for(int i=0;i<N;i++) {
        cin >> a[i];

        
        prefix[i + 1] = (prefix[i] + a[i]%N+ N) % N;

        count += myMap[prefix[i + 1]];
        myMap[prefix[i + 1]]++;

    }
    cout << count<<'\n';
}