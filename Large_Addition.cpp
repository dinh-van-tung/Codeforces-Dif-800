// DINH VAN TUNG
// https://codeforces.com/problemset/problem/1984/B
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

int t, cnt;
ll x;
bool check = true;

int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     //freopen("STRING.inp", "r", stdin); freopen("STRING.out", "w", stdout);
     //freopen("VTung.input", "r", stdin); freopen("VTung.output", "w", stdout);

     cin >> t;
     while (t--)
     {
          cin >> x;
          cnt = 0;
          while (x >= 10)
          {
               ll tmp = (x % 10) - (cnt > 0);
               if (tmp < 0)
               {
                    check = false;
                    break;
               }
               tmp += 10;
               check = false;
               for (int i = 5; i <= 9; i++)
               {
                    if (tmp - i <= 9)
                    {
                         check = true;
                         break;
                    }
               }
               if (!check) break;
               x /= 10, cnt++;
          }
          if (check)
          {
               if (x == 1) cout << "YES\n";
               else cout << "NO\n";
          }
          else cout << "NO\n";
     }
     return 0;
}
// DINH VAN TUNG
