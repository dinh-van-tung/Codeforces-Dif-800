// DINH VAN TUNG
// https://codeforces.com/problemset/problem/1975/C
#include <iostream>
#include <algorithm>
#include <set>
#include <time.h>
#include <vector>
#include <string>
#include <map>
#include <string>
#include <stack>
#include <iomanip>
#include <bitset>
#include <random>
#include <queue>
#include <unordered_map>
using namespace std;
#define MOD 20020303
#define N 200009
typedef long long ll;
typedef long double ld;
typedef double db;
// typedef unsigned long long ll;

int t, n;
ll a[N], ans;
vector<ll> v;

int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     //freopen("STRING.inp", "r", stdin); freopen("STRING.out", "w", stdout);
     //freopen("VTung.input", "r", stdin); freopen("VTung.output", "w", stdout);

     cin >> t;
     while (t--)
     {    
          cin >> n;
          for (int i = 1; i <= n; i++) cin >> a[i];
          if (n == 2) cout << min(a[1], a[2]) << '\n';
          else
          {
               ans = 0;
               for (int i = 1; i <= n - 2; i++)
               {
                    v.clear();
                    for (int j = 0; j <= 2; j++) v.push_back(a[i + j]);
                    sort(v.begin(), v.end());
                    ans = max(ans, v[1]);
               }
               cout << ans << '\n'; 
          } 
          
     }
     return 0;
}
// DINH VAN TUNG
