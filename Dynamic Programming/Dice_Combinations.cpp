/*
 The viper
*/

#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define pp pop_back
#define ff first
#define ss second
#define vi vector<int>
#define vs vector<string>
#define vll vector<long long>
#define all(x) (x).begin(), (x).end()
#define rev(x) (x).rbegin(), (x).rend()
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x;
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define nline "\n"

typedef long long ll;

void init_code() {
   fast_io;
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
}

const ll m = 1e9 + 7;

void solve() {

   read(n);
   int arr[6] = {1, 2, 3, 4, 5, 6};
   vector<ll> dp(n + 1, 0);
   dp[0] = 1;
   for (int i = 0; i <= n; i++) {
      for (int j = 0; j < 6; j++) {
         if (i - arr[j] >= 0) {
            dp[i] = (dp[i] + dp[i - arr[j]]) % m;
         }
      }
   }
   cout << dp[n];
}

int main() {

   init_code();

   // ll tc; cin >> tc;
   // while (tc--) {
   //    solve();
   // }

   solve();
   // read(n);
   // cout<<n+1;

   return 0;

}