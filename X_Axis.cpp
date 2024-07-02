// DINH VAN TUNG
// https://codeforces.com/problemset/problem/1986/A
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

int t, x1, x2, x3;
int f(int tmp)
{
     return abs(x1 - tmp) + abs(x2 - tmp) + abs(x3 - tmp);
}

int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     //freopen("STRING.inp", "r", stdin); freopen("STRING.out", "w", stdout);
     //freopen("VTung.input", "r", stdin); freopen("VTung.output", "w", stdout);

     cin >> t;
     while (t--)
     {
          cin >> x1 >> x2 >> x3;
          int left = 0, right = 11;
          while (right - left > 2)
          {
               int mid1 = (left + right) / 2;
               int mid2 = mid1 + 1;
               if (f(mid1) < f(mid2)) right = mid2;
               else left = mid1;
          }
          int ans = 100;
          for (int i = left; i <= right; i++) ans = min(ans, f(i));
          cout << ans << '\n';
     }
     return 0;
}
// DINH VAN TUNG
