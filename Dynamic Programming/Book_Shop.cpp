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
#define scanf sf
#define printf pf
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,n) for(int i = 0; i < n; i++)
#define vi vector<int>
#define vs vector<string>
#define vll vector<long long>
#define setint set<int>
#define mapint map<int, int>
#define pll pair<long, long>
#define pii pair<int, int>
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define rev(x) (x).rbegin(), (x).rend()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x;
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define nline "\n"

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

ll gcd(ll a, ll b) { if (a == 0) return b; return gcd(b % a, a); }

bool prime(ll k) {
   if (k == 1 || k == 0) { return false; }
   for (ll i = 2; i * i <= k; i++) {
      if (k % i == 0) {return false;}
   } return true;
}

int computeXOR(int n) {
   if (n % 4 == 0)
      return n;
   if (n % 4 == 1)
      return 1;
   if (n % 4 == 2)
      return n + 1;

   return 0;
}

bool is_vowel_lc(char c) {
   if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return 1;
   return 0;
}

bool is_vowel_cc(char c) {
   if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') return 1;
   return 0;
}

void init_code() {
   fast_io;
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
}

<<<<<<< HEAD
vi v;
void preCompute() {
   for (int i = 1; i <= 100000; i *= 10) {
      for (int j = 1; j <= 9; j++) {
         v.push_back(i * j);
      }
   }
}

void solve() {

   int n; cin >> n;
   if (n <= 10) {
      cout << n << nline;
   }
   int ans = 0;
   for (auto it : v) {
      if (it <= n) ans++;
      else break;
   }
   cout << ans << nline;
=======
void solve() {

   int n, x; cin >> n >> x;
   vi price(n), page(n);
   for (int i = 0; i < n; i++)
      cin >> price[i];
   for (int i = 0; i < n; i++)
      cin >> page[i];

   vector<vector<int>> dp(n, vector<int> (x + 1, 0));

   for (int i = price[0]; i <= x; i++) {
      dp[0][i] = page[0];
   }

   for (int i = 1; i < n; i++) {
      for (int j = 0; j <= x; j++) {
         ll notPick = 0 + dp[i - 1][j];
         ll pick = INT_MIN;
         if (price[i] <= j) {
            pick = page[i] + dp[i - 1][j - price[i]];
         }
         dp[i][j] = max(pick, notPick);
      }
   }
   cout << dp[n - 1][x];
>>>>>>> origin/main
}


int main() {

   init_code();

<<<<<<< HEAD
   ll tc; cin >> tc;
   while (tc--) {
      solve();
   }

   // solve();
=======
   // ll tc; cin >> tc;
   // while (tc--) {
   //    solve();
   // }

   solve();
>>>>>>> origin/main

   return 0;

}