// DINH VAN TUNG
// https://codeforces.com/problemset/problem/1977/B
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

int t, cnt;
ll x;
vector<int> v, ans;

int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     //freopen("STRING.inp", "r", stdin); freopen("STRING.out", "w", stdout);
     //freopen("VTung.input", "r", stdin); freopen("VTung.output", "w", stdout);

     cin >> t;
     while (t--)
     {    
          cin >> x;
          v.clear(), ans.clear();
          while (x > 0)
          {
               v.push_back(x % 2);
               x /= 2;
          }

          cnt = 0;
          for (int i = 0; i < int(v.size()); i++)
          {
               if (v[i] == 1) cnt++;
               else
               {
                    if (cnt == 0) ans.push_back(0);
                    else if (cnt == 1) ans.push_back(1), ans.push_back(0), cnt = 0;
                    else
                    {
                         ans.push_back(-1);
                         for (int i = 1; i < cnt; i++) ans.push_back(0);
                         cnt = 1;
                    }
               }
          }

          if (cnt == 1) ans.push_back(1);
          else if (cnt > 1)
          {
               ans.push_back(-1);
               for (int i = 1; i < cnt; i++) ans.push_back(0);
               ans.push_back(1);
          }

          cout << ans.size() << '\n';
          for (int i = 0; i < int(ans.size()); i++) cout << ans[i] << ' ';
          cout << '\n';
     }
     return 0;
}
// DINH VAN TUNG
