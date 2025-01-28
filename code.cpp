#pragma GCC optimize("O3,unroll-loops")

#include<bits/stdc++.h>
using namespace std;
using namespace chrono;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nl "\n"
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define ll long long
#define ull unsigned long long
#define vll vector<ll>
#define vvi vector<vector<int>> 
#define vii vector<pair<int, int>> 
#define pii pair<int, int>

#ifdef OG
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

void solve() {
    int t;
    cin>>t;
    while(t--){
        
    }
}
int main() {
    fastio();
#ifdef OG
    freopen("Error.txt", "w", stderr);
#endif
        auto start1 = high_resolution_clock::now();
        solve();
        auto stop1 = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef OG
        cerr << "Time: " << duration . count() / 1000 << endl;
#endif
}
