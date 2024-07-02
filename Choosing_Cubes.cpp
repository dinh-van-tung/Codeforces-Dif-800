// DINH VAN TUNG
// https://codeforces.com/problemset/problem/1980/B
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

int t, n, f, k, a[N];

int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     //freopen("STRING.inp", "r", stdin); freopen("STRING.out", "w", stdout);
     //freopen("VTung.input", "r", stdin); freopen("VTung.output", "w", stdout);

     cin >> t;
     while (t--)
     {
          cin >> n >> f >> k;
          for (int i = 1; i <= n; i++) cin >> a[i];
          int tmp = a[f], cnt1 = 0, cnt2 = 0;
          for (int i = 1; i <= n; i++)
          {
               if (a[i] >= tmp) cnt1++;
               if (a[i] > tmp) cnt2++;
          }
          if (k >= cnt1) cout << "YES\n";
          else if (cnt2 < k) cout << "MAYBE\n";
          else cout << "NO\n";
     }
     return 0;
}
// DINH VAN TUNG
