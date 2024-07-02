// DINH VAN TUNG
// https://codeforces.com/problemset/problem/1984/A
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

int t, n;
ll a[N];

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
          ll tmp = a[n] - a[1];
          int r = n - 1;
          while (2 <= r)
          {
               if (a[r] - a[2] != tmp) break;
               r--;
          }
          if (r < 2) cout << "NO\n";
          else
          {
               cout << "YES\n";
               cout << 'R';
               for (int i = 2; i <= r; i++) cout << 'B';
               for (int i = r + 1; i <= n; i++) cout << 'R';
               cout << '\n';
          }
     }
     return 0;
}
// DINH VAN TUNG
