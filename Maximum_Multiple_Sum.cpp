// DINH VAN TUNG
// https://codeforces.com/problemset/problem/1985/B
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

int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     //freopen("STRING.inp", "r", stdin); freopen("STRING.out", "w", stdout);
     freopen("VTung.input", "r", stdin); freopen("VTung.output", "w", stdout);

     cin >> t;
     while (t--)
     {
          int n; cin >> n;
          if (n == 2) cout << 2 << '\n';
          else if (n == 3) cout << 3 << '\n';
          else cout << 2 << '\n';
     }
     return 0;
}
// DINH VAN TUNG
