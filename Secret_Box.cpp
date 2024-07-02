// DINH VAN TUNG
// https://codeforces.com/problemset/problem/1985/E
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

int t;
ll a[4], k, ans;
vector<ll> v;

int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     //freopen("STRING.inp", "r", stdin); freopen("STRING.out", "w", stdout);
     //freopen("VTung.input", "r", stdin); freopen("VTung.output", "w", stdout);

     cin >> t;
     while (t--)
     {
          cin >> a[1] >> a[2] >> a[3] >> k;
          sort(a + 1, a + 4);
          ans = 0;
          for (int i = 1; i * i <= k && i <= a[3]; i++)
          {
               if (k % i == 0)
               {
                    ll tmp = k / i;
                    for (int j = 1; j * j <= tmp && j <= a[3]; j++)
                    {
                         if (tmp % j == 0)
                         {
                              v.clear();
                              v.push_back(i), v.push_back(j), v.push_back(tmp / j);
                              sort(v.begin(), v.end());
                              if (v[0] <= a[1] && v[1] <= a[2] && v[2] <= a[3])
                                   ans = max(ans, (a[1] - v[0] + 1) * (a[2] - v[1] + 1) * (a[3] - v[2] + 1));
                         }
                    }
               }
          }
          cout << ans << '\n';
     }
     return 0;
}
// DINH VAN TUNG
