// DINH VAN TUNG
// https://codeforces.com/problemset/problem/1941/B
#include <iostream>
#include <algorithm>
#include <set>
#include <time.h>
#include <vector>
#include <string>
#include <map>
#include <string>
#include <stack>
#include <cstring>
#include <iomanip>
#include <bitset>
#include <random>
#include <queue>
#include <unordered_map>
using namespace std;
typedef long long ll;
// typedef unsigned long long ll;
typedef long double ld;
typedef double db;
const int N = 1000009;
const ll MOD = 1000000007;

int t, n, ans;
ll a[N];

int main()
{
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
     //freopen("STRING.inp", "r", stdin), freopen("STRING.out", "w", stdout);
     //freopen("input.inp", "r", stdin), freopen("output.out", "w", stdout);

     cin >> t;
     while (t--)
     {
          cin >> n;
          for (int i = 1; i <= n; i++) cin >> a[i];

          ans = 1;
          for (int i = 1; i <= n - 2; i++)
          {
               if (a[i] < 0)
               {
                    ans &= 0;
                    break;
               }
               ll tmp = a[i];
               a[i] -= tmp;
               a[i + 1] -= 2 * tmp;
               a[i + 2] -= tmp;
          }

          if (!ans || a[n] != 0 || a[n - 1] != 0) cout << "NO\n";
          else cout << "YES\n";
     }

     return 0;
}
// DINH VAN TUNG
