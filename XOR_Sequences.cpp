// DINH VAN TUNG
// https://codeforces.com/problemset/problem/1979/B
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

int t;
ll x, y, cnt;

int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     //freopen("STRING.inp", "r", stdin); freopen("STRING.out", "w", stdout);
     //freopen("VTung.input", "r", stdin); freopen("VTung.output", "w", stdout);

     cin >> t;
     while (t--)
     {    
          cin >> x >> y;
          cnt = 0;
          while (x % 2 == y % 2 && x >= 0 && y >= 0) cnt++, x /= 2, y /= 2;
          cout << ll(pow(2, cnt)) << '\n';
     }
     return 0;
}
// DINH VAN TUNG
