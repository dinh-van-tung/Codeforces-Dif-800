// DINH VAN TUNG
// https://codeforces.com/problemset/problem/1972/A
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

int t, n, a[N], b[N];
int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     //freopen("STRING.inp", "r", stdin); freopen("STRING.out", "w", stdout);
     freopen("VTung.input", "r", stdin); freopen("VTung.output", "w", stdout);

     cin >> t;
     while (t--)
     {
          cin >> n;
          for (int i = 1; i <= n; i++) cin >> a[i];
          for (int i = 1; i <= n; i++) cin >> b[i];

          int i = n, j = n, ans = 0;
          while (i >= 1 && j >= 1)
          {
               if (a[i] > b[j])
               {
                    while (a[i] > b[j] && i >= 1)
                    {
                         //cout << a[i] << ' ' << b[j] << '\n';
                         ans++;
                         i--;
                    }
                    //i++;
               }
               i--;
               j--;
          }
          cout << ans << '\n';
     }
     return 0;
}
// DINH VAN TUNG
