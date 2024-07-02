// DINH VAN TUNG
// https://codeforces.com/problemset/problem/1979/C
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
#define N 109
typedef long long ll;
typedef long double ld;
typedef double db;
// typedef unsigned long long ll;

int t, n;
ll a[N];

bool F(ll mid)
{
     ll s = 0;
     for (int i = 1; i <= n; i++) s += (mid / a[i] + 1);
     return s <= mid;
}

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
          ll left = n, right = n * 1e9;
          while (right - left > 1)
          {
               ll mid = (left + right) / 2;
               if (!F(mid)) left = mid;
               else right = mid;
          }
          if (F(right))
          {
               for (int i = 1; i <= n; i++) cout << right / a[i] + 1 << ' ';
               cout << '\n';
          }
          else cout << "-1\n";
     }
     return 0;
}
// DINH VAN TUNG
