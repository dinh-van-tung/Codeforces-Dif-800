// DINH VAN TUNG
// https://codeforces.com/problemset/problem/1974/A
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

int t, n, x, y, ans;

int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     //freopen("STRING.inp", "r", stdin); freopen("STRING.out", "w", stdout);
     freopen("VTung.input", "r", stdin); freopen("VTung.output", "w", stdout);

     cin >> t;
     while (t--)
     {
          ans = 0;
          cin >> x >> y;
          ans = y / 2 + (y % 2 > 0);
          x -= (15 * ans - 4 * y);
          if (x <= 0) cout << ans << '\n';
          else cout << ans + x / 15 + (x % 15 > 0) << '\n';
     }
     return 0;
}
// DINH VAN TUNG
