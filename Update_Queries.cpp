// DINH VAN TUNG
// https://codeforces.com/problemset/problem/1986/C
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

int t, n, m, pos[N];
char s[N], c[N];   

int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     //freopen("STRING.inp", "r", stdin); freopen("STRING.out", "w", stdout);
     //freopen("VTung.input", "r", stdin); freopen("VTung.output", "w", stdout);

     cin >> t;
     while (t--)
     {
          cin >> n >> m;
          for (int i = 1; i <= n; i++) cin >> s[i];
          for (int i = 1; i <= m; i++) cin >> pos[i];
          for (int i = 1; i <= m; i++) cin >> c[i];

          sort(pos + 1, pos + m + 1), sort(c + 1, c + m + 1);

          int right = m, left = 1, pivot = 1;
          while (pivot <= m && left <= right)
          {
               if (pos[pivot] == pos[pivot - 1]) right--;
               else
               {
                    s[pos[pivot]] = c[left];
                    left++;
               }
               pivot++;
          }

          for (int i = 1; i <= n; i++) cout << s[i];
          cout << '\n';

     }
     return 0;
}
// DINH VAN TUNG
