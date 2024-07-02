// DINH VAN TUNG
// https://codeforces.com/problemset/problem/1978/B
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
#define N 100009
typedef long long ll;
typedef long double ld;
typedef double db;
// typedef unsigned long long ll;

ll t, n, a, b;
int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     //freopen("STRING.inp", "r", stdin); freopen("STRING.out", "w", stdout);
     //freopen("VTung.input", "r", stdin); freopen("VTung.output", "w", stdout);

     cin >> t;
     while (t--)
     {
          cin >> n >> a >> b;
          if (a >= b) cout << 1ll * n * a << '\n';
          else
          {
               ll tmp = min(b - a, n);
               cout << ((b - tmp + 1) + b) * tmp / 2 + (n - tmp) * a << '\n';
          }
     }
     return 0;
}
// DINH VAN TUNG
