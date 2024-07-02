// DINH VAN TUNG
// https://codeforces.com/problemset/problem/1982/B
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
ll x, y, k;

int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     //freopen("STRING.inp", "r", stdin); freopen("STRING.out", "w", stdout);
     //freopen("VTung.input", "r", stdin); freopen("VTung.output", "w", stdout);

     cin >> t;
     while (t--)
     {
          cin >> x >> y >> k;
          while (k > 0 && x > 1)
          {
               ll tmp = y * (x / y + 1);
               if (k >= (tmp - x))
               {
                    k -= (tmp - x);
                    x = tmp;
                    while (x % y == 0 && x > 1) x /= y;
               }
               else
               {
                    x += k;
                    k = 0;
               }
          }
          if (k == 0) cout << x << '\n';
          else cout << x + k % (y - 1) << '\n';
     }
     return 0;
}
// DINH VAN TUNG
